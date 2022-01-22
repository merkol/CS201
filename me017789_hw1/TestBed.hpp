//
//  TestBed.hpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef TestBed_hpp
#define TestBed_hpp
#include "SelectionAlgorithm.hpp"
#include <stdio.h>
#include "TestBed.hpp"
#include <iostream>
#include <string>





class TestBed{
 public:
    void execute();
    TestBed();
    ~TestBed();
    void setAlgorithm(int type,int k);


protected:
    SelectionAlgorithm *algorithm;
    
    
};

#endif /* TestBed_hpp */
