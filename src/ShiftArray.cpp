#include"include/header.h"
#include<iostream>

namespace HomeFunctions {

void shiftArray(int arr[], int size, int shift){
    shift %= size;
    int T;
    for (int j = 0; j < shift; j++){
        for (int i = size - 1; i > 0; --i){
                T = arr[(i-1)];
                arr[(i-1)] = arr[i];
                arr[i] = T;
            }

    }
}
}
