//
//  AlgorithmSortK.hpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef AlgorithmSortK_hpp
#define AlgorithmSortK_hpp

#include "SelectionAlgorithm.hpp"


class AlgorithmSortK:public SelectionAlgorithm{
public:
    AlgorithmSortK(int k);
    int select();
    
    
};
#endif /* AlgorithmSortK_hpp */
