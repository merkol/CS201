
//
//  AlgorithmSortAll.hpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef AlgorithmSortAll_hpp
#define AlgorithmSortAll_hpp


#include "SelectionAlgorithm.hpp"


class AlgorithmSortAll:public SelectionAlgorithm{
public:
    AlgorithmSortAll(int k);
    int select();
    
};

#endif /* AlgorithmSortAll_hpp */


