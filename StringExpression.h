/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringExpression.h
 * Author: sagrath23
 *
 * Created on May 21, 2016, 11:45 PM
 */

#ifndef STRINGEXPRESSION_H
#define STRINGEXPRESSION_H

#include <string>

using namespace std;

class StringExpression {
public:
    StringExpression();
    StringExpression(string);
    StringExpression(const StringExpression& orig);
    virtual ~StringExpression();
    virtual string evaluate() = 0;
protected:
    string token;
    string regexp;

};

#endif /* STRINGEXPRESSION_H */

