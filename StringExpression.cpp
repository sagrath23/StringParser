/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringExpression.cpp
 * Author: sagrath23
 * 
 * Created on May 21, 2016, 11:45 PM
 */

#include "StringExpression.h"

StringExpression::StringExpression(){
}

StringExpression::StringExpression(string token) {
    this->token = token;
}

StringExpression::StringExpression(const StringExpression& orig) {
}

StringExpression::~StringExpression() {
}

