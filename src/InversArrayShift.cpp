#include"include/header.h"
#include <cstdarg>
#include <iostream>



namespace HomeFunctions {

void InversArrayShift(int count, ...){
    va_list list;
    int i = 0;
    va_start(list, count);
    for (i; i < count; i++)
        std::cout << '['<< !(va_arg(list, int)) << " ]";
}
}
