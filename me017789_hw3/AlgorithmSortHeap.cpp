//
//  AlgorithmSortHeap.cpp
//  CS201 HW3
//
//  Created by Mert Erkol on 8.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//
#include "SelectionAlgorithm.hpp"
#include "AlgorithmSortHeap.hpp"
#include "BinaryHeap.hpp"
#include <iostream>

using namespace std;
AlgorithmSortHeap::AlgorithmSortHeap(int k):SelectionAlgorithm(k){
    this->k=k;
    }
int AlgorithmSortHeap::select(){
    int n;
    cin >>n;
    BinaryHeap heap(k);
    int x;
    for(int i=0;i<k;i++){
        cin >>x;
        heap.insert(x);
        }
    for (int i=0;i<n-k;i++){
        cin >>x;
        if(x>heap.getMin()){
      
            heap.deleteMin();
            heap.insert(x);
        }
    }
    
    return heap.getMin();
}

