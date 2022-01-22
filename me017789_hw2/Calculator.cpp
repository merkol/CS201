//
//  Calculator.cpp
//  CS201 HW2
//
//  Created by Mert Erkol on 1.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include <iostream>
#include <string>
#include "Calculator.hpp"

using namespace std;

 Calculator::Calculator(string s){
        string Stacks="";
           string output="";
infixExpression = s;
    stack = new Stack();
    string token;
    istringstream iss(infixExpression);
    iss >> token;
   
    while(token.compare(";") != 0) {
    
        
        
    
        
        if(token==" "||token=="("||token==")"||token=="+"||token=="-"||token=="*"||token=="/"||token==";"){
        
            if(Stacks==""){
                
            StackItem *icon=new StackItem(token);
                stack->push(icon);
                Stacks+=token;
                
                }
            else{
                if(token=="+" && stack->top()->op>3) {
                    
                    StackItem *icon=new StackItem(true,3);
                              stack->push(icon);
                            Stacks+=token;
                    }
                 else if(token=="+" && stack->top()->op<=3){
                     
                    long j=Stacks.length()-1;
                    while(Stacks!=""){
            
                        stack->pop();
                        if(Stacks[j]!='('){
                        output+=Stacks[j];
                            output+=" ";
                            }
                        
                        Stacks.erase(Stacks.length()-1);
                        j--;
                    }
                    
                    StackItem *icon=new StackItem(true,3);
                    stack->push(icon);
                    Stacks+=token;
                    }
                if(token=="*" && stack->top()->op<5){
                    
                                StackItem *icon=new StackItem(true,5);
                                stack->push(icon);
                                Stacks+=token;
                }
                else if(token=="*" && stack->top()->op>5){
                   
                    long j=Stacks.length()-1;
                    while(Stacks!=""){
                                           
                    stack->pop();
                    if(Stacks[j]!='('){
                                               output+=Stacks[j];
                        output+=" ";
                    }
                         Stacks.erase(Stacks.length()-1);
                    j--;
                    }
                   
                    StackItem *icon=new StackItem(true,5);
                    stack->push(icon);
                    Stacks+=token;
                    }
                if (token=="-" && stack->top()->op>2) {
                    
                    StackItem *icon=new StackItem(true,2);
                    stack->push(icon);
                    Stacks+=token;
                }
                else if (token=="-" && stack->top()->op<=2){
                    long j=Stacks.length()-1;
                    while(Stacks!=""){
                                                              
                    
                    stack->pop();
                        
                    if(Stacks[j]!='('){
                                               output+=Stacks[j];
                        output+=" ";
                    }
                    Stacks.erase(Stacks.length()-1);
                    j--;
            }
                    
                    StackItem *icon=new StackItem(true,2);
                    stack->push(icon);
                    Stacks+=token;
                    
                }
                if (token=="/" && stack->top()->op<4) {
               
                StackItem *icon=new StackItem(true,4);
                stack->push(icon);
                    Stacks+=token;
                }
                else if (token=="/" && stack->top()->op>=4){
                    long j=Stacks.length()-1;
                    while(Stacks!=""){
                                                                      
                            stack->pop();
                            if(Stacks[j]!='('){
                            output+=Stacks[j];
                            output+=" ";
                            }
                            Stacks.erase(Stacks.length()-1);
                            j--;
                    }
                            
                            StackItem *icon=new StackItem(true,4);
                            stack->push(icon);
                            Stacks+=token;
                }
                
                 if(token=="("){
                    
                    StackItem *icon=new StackItem(true,0);
                    stack->push(icon);
                    Stacks+=token;
                }
                
                /*else if(token==")"){
                    StackItem *item =new StackItem("(");
                    
                    while(stack->top()!=item){
                        output.append(stack->pop()->toString());
                        output.append(" ");
                        
                        
                   
                
                }
                stack->pop();
//                Stacks.erase(Stacks.length()-1);
                    }*/
        
                 
               
            }
                
                
        }
        
        else{
            output+=token;
            output+=" ";
            
            StackItem *icon=new StackItem(token);
            stack->push(icon);
        }
        
    
    iss >> token;
    }
            long j=Stacks.length()-1;
            while(Stacks!=""){
                                                                         
                               
            stack->pop();
                                   
            output+=Stacks[j];
        output+=" ";
            Stacks.erase(Stacks.length()-1);
            j--;
                       }
    output+=";";
    
    postfixExpression=output;
}







string Calculator::getPostfix(){
    return postfixExpression;
}
int Calculator::calculate(){
    string token;
     istringstream iss(postfixExpression);
     iss >> token;
    Stack *stack1=new Stack();
    int operand2, operand1, result = 0 ;
    
     while(token.compare(";") != 0) {
        StackItem *op=new StackItem(token);
         if(op->isOperator==false){
             stack1->push(op);
}
        else if(op->isOperator==true){
            
            operand1=stack1->pop()->n;
            operand2=stack1->pop()->n;
            StackItem *item=new StackItem(token);
            if(item->op==2){
                result=operand1-operand2;
                StackItem *item1=new StackItem(false,result);
                stack1->push(item1);
                
            }
            else if(item->op==3){
                result=operand1+operand2;
                StackItem *item2=new StackItem(false,result);
                stack1->push(item2);
            }
            else if(item->op==4){
                result=operand1/operand2;
                StackItem *item3=new StackItem(false,result);
                stack1->push(item3);
            }
            else if(item->op==5){
                
                result=operand1*operand2;
                StackItem *item4=new StackItem(false,result);
                stack1->push(item4);
            }
            
        }
         iss>>token;
}
    return result;
}


