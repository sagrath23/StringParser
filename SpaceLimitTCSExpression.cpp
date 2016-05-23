/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SpaceLimitTCSExpression.cpp
 * Author: sagrath23
 * 
 * Created on May 21, 2016, 11:49 PM
 */

#include "SpaceLimitTCSExpression.h"

SpaceLimitTCSExpression::SpaceLimitTCSExpression(string token) : StringExpression(token) {
}

SpaceLimitTCSExpression::SpaceLimitTCSExpression(const SpaceLimitTCSExpression& orig) {
}

SpaceLimitTCSExpression::~SpaceLimitTCSExpression() {
}

string SpaceLimitTCSExpression::evaluate(){
    this->regexp = "Space Limit Expression";
    return this->regexp;
}
