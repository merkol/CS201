//
//  BinaryHeap.hpp
//  CS201HW3
//
//  Created by Mert Erkol on 22.04.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#ifndef BinaryHeap_hpp
#define BinaryHeap_hpp

#include <stdio.h>
class BinaryHeap {

public:
    BinaryHeap(int); // constructor that takes the capacity of the structure
    ~BinaryHeap(); // destructor
    void insert(int); // inserts a new element to the heap
    void deleteMin(); // removes the minimum element from the heap
    int getMin(); // returns the minimum element int the heap, returns -1 if the heap is empty
    void percolateUp(int);
    void printArray();

private:
    int *heap; // array to store the elements of the heap
    int size; // keeps the number of elements in the heap
    int capacity; // keeps the total capacity of the heap
    void percolateDown(int);
    void swap(int, int);
};


#endif /* BinaryHeap_hpp */

