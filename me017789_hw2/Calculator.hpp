//
//  Calculator.hpp
//  CS201 HW2
//
//  Created by Mert Erkol on 1.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
#ifndef __CALCULATOR__
#define __CALCULATOR__

#include <string>
#include "Stack.hpp"

using namespace std;

class Calculator {
public:
    Calculator(string); // constructor that takes an arithmetic expression in infix representation
    
    string getPostfix(); // returns the postfix representation of the arithmetic expression
    int calculate(); // evaluates and returns the result of the arithmetic expression
    
private:
    Stack *stack; // stack to be used for infix-postfix conversion and evaluation of an arithmetic expression
    string postfixExpression; // keeps a postfix representation of the arithmetic expression
    string infixExpression; // keeps an infix representation of the arithmetic expression
};

 #endif

