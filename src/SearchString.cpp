#include"include\header.h"
#include<cstdlib>

namespace HomeFunctions {
using namespace std;

void SearchString(){
    string* s = new string;
    string* s1 = new string;
    cout << "Please enter a string: ";
    cin >> *s;
    ifstream isfile("../files/Sonnet_3.txt");
    while (isfile){
        isfile >> *s1;
        for(int i = 0; i < s1->size(); i++){
            if(isalpha((*s1)[i]))
                continue;
            s1->erase(i);
        }
        if (*s == *s1){
            cout << *s << " is found!\n";
            return;
        }
    }
    cout << '"' << *s << " is not found!\n";
}
}
