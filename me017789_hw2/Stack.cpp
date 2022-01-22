//
//  Stack.cpp
//  CS201 HW2
//
//  Created by Mert Erkol on 1.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include "Stack.hpp"
#include "StackItem.hpp"
#include <iostream>

using namespace std;
Stack::Stack(){
    head=NULL;
    
}
Stack::~Stack(){
    while(!isEmpty()){
        pop();
    }
}

 StackItem* Stack::pop(){
          StackItem* backup = head;
              head = backup->next;
              StackItem* copy = backup;
          
              delete backup;
              return copy;
}

void Stack::push(StackItem *s){
  s->next = head;
  head = s;
    
    }
StackItem* Stack::top(){
    return head;
        
    
}
bool Stack::isEmpty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
}
}
