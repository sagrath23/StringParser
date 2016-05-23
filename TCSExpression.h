/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TCSExpression.h
 * Author: sagrath23
 *
 * Created on May 21, 2016, 11:48 PM
 */

#ifndef TCSEXPRESSION_H
#define TCSEXPRESSION_H

#include "StringExpression.h"


class TCSExpression : StringExpression {
public:
    TCSExpression(string);
    TCSExpression(const TCSExpression& orig);
    virtual ~TCSExpression();
    virtual string evaluate();
private:

};

#endif /* TCSEXPRESSION_H */

