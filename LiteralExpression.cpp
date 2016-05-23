/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LiteralExpression.cpp
 * Author: Steven Augusto Villegas Castellanos
 * 
 * Created on May 21, 2016, 11:45 PM
 */

#include "LiteralExpression.h"

LiteralExpression::LiteralExpression(string token) : StringExpression(token) {
    this->regexp = "("+this->token+")";
}

LiteralExpression::LiteralExpression(const LiteralExpression& orig){
}

LiteralExpression::~LiteralExpression() {
}

string LiteralExpression::evaluate(){
    return this->regexp;
}