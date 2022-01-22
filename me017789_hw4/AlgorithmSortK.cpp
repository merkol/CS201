//
//  AlgorithmSortK.cpp
//  CS 201 HW1
//
//  Created by Mert Erkol on 26.02.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include "AlgorithmSortK.hpp"
#include "SelectionAlgorithm.hpp"

#include <iostream>

using namespace std;

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k){
    this->k=k;

}
int AlgorithmSortK::select(){

    
    int n;
    cin>>n;
    int *arr=new int[k];
    for(int i=0;i<k;i++){
        cin >> arr[i];
        }
    for(int i=0;i<k;i++){
        int temp=arr[i];
        int j=i-1;
        while(temp>arr[j]&&j>=0){
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=temp;
    }
    
    int x;
    for(int i=0;i<n-k;i++){
        cin>>x;
        
    
        if(x>arr[k-1]){
            arr[k-1]=x;
            
            for(int a=k-1;a>0;a--){
                if(arr[a-1]<arr[a]){
                    int temp = 0;
                    temp=arr[a-1];
                    arr[a-1]=arr[a];
                    arr[a]=temp;
                        }
                else
                    break;
                    }
                }
                
    }
        
    delete[] arr;
    int result=arr[k-1];
    return result;
}


