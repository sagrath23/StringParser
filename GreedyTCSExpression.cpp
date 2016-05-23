/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GreedyTCSExpression.cpp
 * Author: sagrath23
 * 
 * Created on May 21, 2016, 11:54 PM
 */

#include "GreedyTCSExpression.h"

GreedyTCSExpression::GreedyTCSExpression(string token) : StringExpression(token) {
}

GreedyTCSExpression::GreedyTCSExpression(const GreedyTCSExpression& orig) {
}

GreedyTCSExpression::~GreedyTCSExpression() {
}

string GreedyTCSExpression::evaluate(){
    this->regexp = "(.*?)";
    return this->regexp;
}