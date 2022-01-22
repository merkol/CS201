//
//  Stack.hpp
//  CS201 HW2
//
//  Created by Mert Erkol on 1.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "StackItem.hpp"
class Stack{
public:
    Stack();
    ~Stack();
    StackItem* pop();
    void push(StackItem*);
    StackItem* top();
    bool isEmpty();
   

private:
     StackItem *head;
};






#endif /* Stack_hpp */
