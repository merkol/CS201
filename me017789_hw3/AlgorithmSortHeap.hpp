//
//  AlgorithmSortHeap.hpp
//  CS201 HW3
//
//  Created by Mert Erkol on 8.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef AlgorithmSortHeap_hpp
#define AlgorithmSortHeap_hpp
#include "SelectionAlgorithm.hpp"

#include <stdio.h>
class AlgorithmSortHeap:public SelectionAlgorithm{
public:
    AlgorithmSortHeap(int k);
    int select();
    
};
#endif /* AlgorithmSortHeap_hpp */

