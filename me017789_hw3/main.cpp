//
//  main.cpp
//  CS 201 HW3
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//
#include <iostream>
#include <string>
#include <fstream>
#include "TestBed.hpp"
#include "SelectionAlgorithm.hpp"
#include "AlgorithmSortK.hpp"
#include "AlgorithmSortAll.hpp"
#include "AlgorithmSortHeap.hpp"

using namespace std;
int main(int argc, char *argv[]) {

    
        string testfile;
            if (argc < 2) {
                    cout << "Enter a test file name:" << endl;
                    cin >> testfile;
                }
            else {
                testfile = argv[1];
}

ifstream file(testfile.c_str());
    if (file.is_open()) {
        cin.rdbuf(file.rdbuf());
    }
        else{
       cout << "Error: cannot read the test file!" << endl;
        return -1;
       }
    int algorithmType;
    int k;
// Numbers are obtained from the file line by line with cin
    cin >> algorithmType;
    cin >> k;
// Create a TestBed object, initialize and execute the algorithm
    
    TestBed *testBed = new TestBed();
    testBed->setAlgorithm(algorithmType, k);
    testBed->execute();
    delete testBed;

    return 0;
    
    
}



