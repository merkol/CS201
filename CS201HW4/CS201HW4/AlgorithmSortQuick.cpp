//
//  AlgorithmSortQuick.cpp
//  CS201HW4
//
//  Created by Mert Erkol on 15.05.2020.
//  Copyright © 2020 Mert Erkol. All rights reserved.
//

#include "AlgorithmSortQuick.hpp"
#include "SelectionAlgorithm.hpp"
#include <iostream>
using namespace std;



AlgorithmSortQuick::AlgorithmSortQuick(int k):SelectionAlgorithm(k){
    this->k=k;
}
int AlgorithmSortQuick::select(){
    int n;
    cin>>n;
     int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        }
    
    int result=quickselect(arr,0,n-1,k);
    delete [] arr;
    return result;
}
void AlgorithmSortQuick::swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int AlgorithmSortQuick::median(int *arr, int start, int end){
    int center=(start+end)/2;
    if(arr[center]>arr[start]){
        swap(arr,center,start);
        }
    if(arr[end]>arr[start]){
        swap(arr,end,start);
    }
    if(arr[end]>arr[center]){
        swap(arr,end,center);
    }
    swap(arr,center,end);
    return arr[end];
    
    }



int AlgorithmSortQuick::quickselect(int *arr, int start, int end, int k){
        if(end-start<=10){
        for(int i=start+1;i<=end;i++){
               int temp=arr[i];
               int j=i-1;
               while(temp>arr[j]&&j>=0){
                   arr[j+1]=arr[j];
                   j--;
                   
               }
               arr[j+1]=temp;
           }
           
           int result = arr[end+k-1];
          
           return result;
            
    }
    else{
        int pivot=median(arr,start,end);
      
        
        int i=start,j=end-1;
        for( ; ; ){
            while(arr[++i]>pivot){
                
            }
            while (pivot>arr[--j]) {
                
            }
            if (i<j) {
                swap(arr, i, j);
            }
            else{
                break;
            }
        }
        swap(arr, i, end);
        
            
    
        
       
       
        
        if (k<i-start+1) {
            return quickselect(arr, start,i-1, k);
            
        }
        else if (k==i-start+1) {
            return pivot;
        }
        else{
            return quickselect(arr, i+1, end, k-(i-start+1));
        }
           
    
    

    
    
}
}
