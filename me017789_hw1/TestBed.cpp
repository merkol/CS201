//
//  TestBed.cpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include "TestBed.hpp"
#include "SelectionAlgorithm.hpp"
#include "AlgorithmSortK.hpp"
#include "AlgorithmSortAll.hpp"
#include "AlgorithmSortHeap.hpp"
#include <iostream>
#include <string>
#include <ctime>


using namespace std;
 


TestBed::TestBed(){
    
}

TestBed::~TestBed(){
    delete algorithm;
    
}

void TestBed::setAlgorithm(int type,int k){
    
    if(type==1){
        algorithm=new AlgorithmSortAll(k);
        }
    else if(type==2){
        algorithm = new AlgorithmSortK(k);
    }
    else if(type==3){
        algorithm = new AlgorithmSortHeap(k);
    }
}

void TestBed::execute(){
    
    clock_t start = clock();
    int result = algorithm->select();
    clock_t end = clock();
    double cpu_time = static_cast<double>( end - start ) /CLOCKS_PER_SEC;
    cout << "Result is"<< result << endl;
    cout << "Time is"<< cpu_time << endl;
}
