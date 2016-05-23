/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TCSExpression.cpp
 * Author: sagrath23
 * 
 * Created on May 21, 2016, 11:48 PM
 */

#include "TCSExpression.h"

TCSExpression::TCSExpression(string token) : StringExpression(token) {
}

TCSExpression::TCSExpression(const TCSExpression& orig) {
}

TCSExpression::~TCSExpression() {
}

string TCSExpression::evaluate(){
    this->regexp = "Normal TCS";
    return this->regexp;
}