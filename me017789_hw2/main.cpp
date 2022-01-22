//
//  main.cpp
//  CS201 HW2
//
//  Created by Mert Erkol on 1.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "Calculator.hpp"

int main ()
{
    string infixExpression;
    cout << "Enter an arithmetic expression:" << endl;
    getline(cin, infixExpression);

    Calculator *calc = new Calculator(infixExpression);

    cout << "Input expression in postfix form: " << calc->getPostfix() << endl;
    cout << "The result is: " << calc->calculate() << endl;

    delete calc;

    return 0;
}
