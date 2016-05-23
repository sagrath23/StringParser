/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GreedyTCSExpression.h
 * Author: sagrath23
 *
 * Created on May 21, 2016, 11:54 PM
 */

#ifndef GREEDYTCSEXPRESSION_H
#define GREEDYTCSEXPRESSION_H

#include "StringExpression.h"


class GreedyTCSExpression : StringExpression{
public:
    GreedyTCSExpression(string);
    GreedyTCSExpression(const GreedyTCSExpression& orig);
    virtual ~GreedyTCSExpression();
    virtual string evaluate();

private:

};

#endif /* GREEDYTCSEXPRESSION_H */

