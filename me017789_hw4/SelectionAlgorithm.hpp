//
//  SelectionAlgorithm.hpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef SelectionAlgorithm_hpp
#define SelectionAlgorithm_hpp



class SelectionAlgorithm {
public:
    SelectionAlgorithm(int k);
    virtual int select();
    
    
protected:
    int k;
    
    
    
};
#endif /* SelectionAlgorithm_hpp */


