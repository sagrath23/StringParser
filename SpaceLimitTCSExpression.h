/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SpaceLimitTCSExpression.h
 * Author: sagrath23
 *
 * Created on May 21, 2016, 11:49 PM
 */

#ifndef SPACELIMITTCSEXPRESSION_H
#define SPACELIMITTCSEXPRESSION_H

#include "TCSExpression.h"


class SpaceLimitTCSExpression : StringExpression {
public:
    SpaceLimitTCSExpression(string);
    SpaceLimitTCSExpression(const SpaceLimitTCSExpression& orig);
    virtual ~SpaceLimitTCSExpression();
    virtual string evaluate();
private:

};

#endif /* SPACELIMITTCSEXPRESSION_H */

