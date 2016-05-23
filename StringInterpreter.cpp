/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringInterpreter.cpp
 * Author: Steven Villegas
 * 
 * Created on May 21, 2016, 11:39 PM
 */

#include "StringInterpreter.h"
#include "LiteralExpression.h"
#include "TCSExpression.h"
#include "SpaceLimitTCSExpression.h"
#include "GreedyTCSExpression.h"

StringInterpreter::StringInterpreter() {
    this->literalPattern = new pcrecpp::RE("([a-zA-Z]+)");
    this->normalTCSPattern = new pcrecpp::RE("(%\\{)([0-9]+)(\\})");
    this->spaceLimitTCSPattern = new pcrecpp::RE("(%\\{)([0-9]+)S([0-9]+)(\\})");
    this->greedyTCSPattern = new pcrecpp::RE("(%\\{)([0-9]+)G(\\})");
    this->lastSequenceEvaluated = 0;
}

StringInterpreter::StringInterpreter(const StringInterpreter& orig) {
}

StringInterpreter::~StringInterpreter() {
}

bool StringInterpreter::validateSequence(int tokenSeqNumber){
    if(tokenSeqNumber == this->lastSequenceEvaluated){
        this-lastSequenceEvaluated++;
        return true;
    }
    else{
        return false;
    }
}

string StringInterpreter::evaluate(string input) {
    //split input strings per spaces
    istringstream iss(input);
    vector<string> tokens;
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
    string open,close;
    int tokenSeqNumber;
    for(vector<string>::iterator it = tokens.begin(); it != tokens.end(); ++it) {
        //create matching string expressions
        bool matches = false;
        if(this->literalPattern->FullMatch(*it)){
            LiteralExpression lit(*it);
            this->regexp = this->regexp + lit.evaluate();
            matches = true;
        }
        if(this->normalTCSPattern->FullMatch(*it,&open,&tokenSeqNumber,&close)){
            if(this->validateSequence(tokenSeqNumber)){
                TCSExpression tcs(*it);
                this->regexp = this->regexp + tcs.evaluate();
                matches = true;
            }
            else{
                cout<<"invalid token sequence"<<endl;
                exit(2);
            }    
        }
        if(this->spaceLimitTCSPattern->FullMatch(*it,&open,&tokenSeqNumber,&close)){
            if(this->validateSequence(tokenSeqNumber)){
                SpaceLimitTCSExpression sltcs(*it);
                this->regexp = this->regexp + sltcs.evaluate();
                matches = true;
            }
            else{
                cout<<"invalid token sequence"<<endl;
                exit(2);
            }
        }
        if(this->greedyTCSPattern->FullMatch(*it,&open,&tokenSeqNumber,&close)){
            if(this-validateSequence(tokenSeqNumber)){
                GreedyTCSExpression gtcs(*it);
                this->regexp = this->regexp + gtcs.evaluate();
                matches = true;
            }
            else{
                cout<<"invalid token sequence"<<endl;
                exit(2);
            }
        }
        if(it != tokens.end()-1){
            this->regexp = this->regexp +"(\\s+)";
        }
    }    
    return this->regexp;
}