/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Steven Augusto Villegas Castellanos
 *
 * Created on May 21, 2016, 3:35 PM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <pcrecpp.h>

#include "StringInterpreter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //initialize the interpreter
    StringInterpreter interpreter;
    string regxep = interpreter.evaluate(argv[1]);
    string lineInput;
    //and analyze the lines in the file
     pcrecpp::RE expression(regxep);
    while (getline(cin, lineInput)) {
        if(expression.FullMatch(lineInput)){
            cout << lineInput << endl;
        }
    }
    return 0;
}

