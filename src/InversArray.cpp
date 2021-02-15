#include"include/header.h"

namespace HomeFunctions {

void InversArray(bool arr[], int size){
    for (int i = 0; i < size; i++)
        arr[i] = !arr[i];
}
}
