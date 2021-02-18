#include"include/header.h"
#include<iostream>

namespace HomeFunctions {

bool FunnyArray(int arr[], int size){
    int i = 0, rightSum = arr[i], j = size, leftSum = arr[j-1];
    while(i <= j){
        if(rightSum < leftSum)
            rightSum += arr[i+1];
        else
            leftSum = arr[j-1];
        i++;
        j--;
    }
    if (rightSum == leftSum)
        return true;
    else
        return false;
}
}
