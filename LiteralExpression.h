/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LiteralExpression.h
 * Author: Steven Augusto Villegas Castellanos
 *
 * Created on May 21, 2016, 11:45 PM
 */

#ifndef LITERALEXPRESSION_H
#define LITERALEXPRESSION_H

#include "StringExpression.h"


class LiteralExpression : StringExpression {
public:
    LiteralExpression(string);
    LiteralExpression(const LiteralExpression& orig);
    virtual ~LiteralExpression();
    virtual string evaluate();
private:

};

#endif /* LITERALEXPRESSION_H */

