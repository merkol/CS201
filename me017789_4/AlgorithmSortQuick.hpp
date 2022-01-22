//
//  AlgorithmSortQuick.hpp
//  CS201HW4
//
//  Created by Mert Erkol on 15.05.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef AlgorithmSortQuick_hpp
#define AlgorithmSortQuick_hpp
#include "SelectionAlgorithm.hpp"

#include <stdio.h>

class AlgorithmSortQuick:public SelectionAlgorithm{
public:
    AlgorithmSortQuick(int k);
    int select();
    int quickselect(int arr[],int start,int end,int k);
    void swap(int arr[],int,int);
    int median(int arr[],int start,int end);
  
    
    
};

#endif /* AlgorithmSortQuick_hpp */
