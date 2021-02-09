#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Первое задание
    int a;
    cout << "Please enter a number: " << endl;
    cin >> a;
    if(a >= 10 && a <= 20)
        cout << "10 <= " << a << " <= 20" << endl;
    else
        cout << a << " <= 10, or " << a << " >= 20" << endl;

    //Второе задание
    cout << "Enter a number: ";
    cin >> a;
    int i;
    for (i = (a - 1); i >= 1; i--){
        if(!(a % i)){
            break;
        }
    }
    i == 1 ? cout << "Number is a simple." << endl :
             cout << "Number is a not simple." << i << endl;


    //Третье задание
    cout << "Please enter a two numbers: " << endl;
    cin >> a >> i;
    if(a == 10 || i == 10 || (a + i) == 10)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    //Четвертое задание
    cout << "Enter a year: " << endl;
    cin >> a;
    if (!(a % 4) && ((a % 100) || !(a % 400)))
        cout << "Leap year" << endl;
    else
        cout << "Not leap year" << endl;
    return 0;
}
