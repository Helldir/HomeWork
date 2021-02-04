#include <iostream>
#include <iomanip>
#include "header.h"

using namespace std;

int main(){
    //Первое задание
    int a = 5;
    int b = 9;
    int c = 4;
    int d = 3;
    float f = static_cast<float>(a) * (static_cast<float>(b) + static_cast<float>(c) / static_cast<float>(d));
    cout << "Result: " << setprecision(5) << f << endl;

    //Второе задание
    cout << "Enter a number: ";
    cin >> a;
    (a > 21) ?  cout << "2 * (a - 21) = " << 2 * (a - 21) << endl : cout << "a - 21 = " << (a - 21) << endl;

    //Третье задание
    f = static_cast<float>(a_1) * (static_cast<float>(b_1) + static_cast<float>(c_1) / static_cast<float>(d_1));
    cout << "Result number 2: " << setprecision(5) << f << endl;

    //Четвертое задание
    int array[3][3][3] = {{{1,2,3},{1,2,3},{1,2,3}},{{1,2,3},{1,2,3},{1,2,3}},{{1,2,3},{1,2,3},{1,2,3}}};
    cout << "PTR: " << *(*(*(array+1)+1)+1) << endl;
    return 0;
}
