//
//  AlgorithmSortAll.cpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include "AlgorithmSortAll.hpp"
#include "SelectionAlgorithm.hpp"
#include <stdio.h>
#include <math.h>


#include <iostream>

using namespace std;
AlgorithmSortAll::AlgorithmSortAll(int k):SelectionAlgorithm(k){
    this->k=k;
    }

int AlgorithmSortAll::select(){
    int n;
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
        }
    for(int i=0;i<n;i++){
        int temp=arr1[i];
        int j=i-1;
        while(temp>arr1[j]&&j>=0){
            arr1[j+1]=arr1[j];
            j--;
            
        }
        arr1[j+1]=temp;
    }
    
    int result = arr1[k-1];
    delete[] arr1;
    return result;
}


