#include <iostream>
#include<stdio.h>
#include <iomanip>
#include "include/header.h"


using namespace std;


int main(){
    void (*Func)(bool*, int);
    void (*Func2)(int*, int);
    void (*Func3)(int*, int, int);
    bool (*Func4)(int*, int);
    void (*Func5)(int, ...);
    //Первое задание
    bool array[] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    int a = sizeof (array);
    Func = HomeFunctions::InversArray;
    Func(array, a);
    for(int i = 0; i < (int)sizeof (array); i++)
        cout << '[' << array[i] << "] ";
    cout << '\n';
    //Второе задание
    int Array_2[8];
    Func2 = HomeFunctions::ReleaseArray;
    Func2(Array_2, (int)sizeof (Array_2)/4);
    for(int i = 0; i < (int)sizeof (Array_2)/4; i++)
        cout << '[' << Array_2[i] << "] ";
    cout << '\n';
    //Четвертое задание
    Func3 = HomeFunctions::shiftArray;
    Func3(Array_2, (int)sizeof (Array_2)/4, 10);
    for(int i = 0; i < (int)sizeof (Array_2)/4; i++)
        cout << '[' << Array_2[i] << "] ";
    cout << '\n';
    //Третье задание
    Func4 = HomeFunctions::FunnyArray;
    if (Func4(Array_2, (int)sizeof (Array_2)/4))
        cout << "True\n";
    else
        cout << "False\n";
    //Пятое задание
    Func5 = HomeFunctions::InversArray;
    Func5(10, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0);
    return 0;
}
