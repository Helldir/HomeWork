#include <iostream>
#define COMPRESSION(x, y) (((x) >= (0)) && ((x) < (y))) ? true : false
#define ELEMENT(x, y, z) *(*(x+y)+z)
#define ELEMENTS(x, t) sizeof(x) / sizeof(t)

using namespace std;


int main(){
    //Первое задание
    (COMPRESSION(5, 4) == true) ? cout << "True\n" : cout << "False\n";
    //Второе задание
    int** arr = new int*[5];
    for (int i = 1; i <=5; i++){
            arr[i] = new int[5];
        for (int j = 1; j<=5; j++)
            arr[i][j] = (5+j);
    }
    cout << ELEMENT(arr, 2, 5) << endl;
    //Третье задание
    char array[6];
    cout << ELEMENTS(array, int);
    return 0;
}
