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
    this->normalTCSPattern = new pcrecpp::RE("(%)(\\{)([0-9]+)(\\})");
    this->spaceLimitTCSPattern = new pcrecpp::RE("(%)(\\{)([0-9]+S[0-9]+)(\\})");
    this->greedyTCSPattern = new pcrecpp::RE("(%)(\\{)([0-9]+G)(\\})");
}

StringInterpreter::StringInterpreter(const StringInterpreter& orig) {
}

StringInterpreter::~StringInterpreter() {
}

string StringInterpreter::evaluate(string input) {
    //split input strings per spaces
    istringstream iss(input);
    vector<string> tokens;
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
    for(vector<string>::iterator it = tokens.begin(); it != tokens.end(); ++it) {
        //create matching string expressions
        bool matches = false;
        if(this->literalPattern->FullMatch(*it)){
            cout<< "Literal Pattern Matches!" <<endl;
            LiteralExpression lit(*it);
            this->regexp = this->regexp + lit.evaluate() + "(\\s+)";
            matches = true;
        }
        if(this->normalTCSPattern->FullMatch(*it)){
            cout<< "NormalTCS Pattern Matches!" <<endl;
            TCSExpression tcs(*it);
            this->regexp = this->regexp + tcs.evaluate() + "(\\s+)";
            matches = true;
        }
        if(this->spaceLimitTCSPattern->FullMatch(*it)){
            cout<< "SpaceLimit TCS Pattern Matches!" <<endl;
            SpaceLimitTCSExpression sltcs(*it);
            this->regexp = this->regexp + sltcs.evaluate() + "(\\s+)";
            matches = true;
        }
        if(this->greedyTCSPattern->FullMatch(*it)){
            cout<< "Greedy TCS Pattern Matches!" <<endl;
            GreedyTCSExpression gtcs(*it);
            this->regexp = this->regexp + gtcs.evaluate() + "(\\s+)";
            matches = true;
        }
    }    
    return this->regexp;
}