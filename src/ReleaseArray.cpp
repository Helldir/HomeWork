#include"include/header.h"

namespace HomeFunctions {

void ReleaseArray(int arr[], int size){
    int j = 0;
    for (int i = 0; i < size; i++){
        arr[i] = j;
        j += 3;
    }
}
}
