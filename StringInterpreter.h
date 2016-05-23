/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringInterpreter.h
 * Author: sagrath23
 *
 * Created on May 21, 2016, 11:39 PM
 */

#ifndef STRINGINTERPRETER_H
#define STRINGINTERPRETER_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <pcrecpp.h>


#include "StringExpression.h"

using namespace std;

class StringInterpreter {
public:
    StringInterpreter();
    StringInterpreter(const StringInterpreter& orig);
    virtual ~StringInterpreter();
    string evaluate(string);
private:
    pcrecpp::RE* literalPattern;
    pcrecpp::RE* normalTCSPattern;
    pcrecpp::RE* spaceLimitTCSPattern;
    pcrecpp::RE* greedyTCSPattern;
    string regexp;
};

#endif /* STRINGINTERPRETER_H */

