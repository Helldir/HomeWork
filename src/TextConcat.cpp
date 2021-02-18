#include"include\header.h"

namespace HomeFunctions {
using namespace std;

void Concat(string* strptr, ifstream* file);

void TextConcat(){
    int* i = new int(0);
    string* string_ptr = (string*)calloc(*i, sizeof (string));
    ifstream* file = new ifstream("../files/Sonnet.txt");
    Concat(string_ptr, file);
    file->close();
    file = new ifstream("../files/Sonnet_2.txt");
    Concat(string_ptr, file);
    file->close();
    file = nullptr;
    ofstream osfile("../files/Sonnet_3.txt");
    for (int j = 0; j <= *i; j++){
        osfile << string_ptr[j] << ' ';
    }
    osfile.close();
}

void Concat(string* strptr, ifstream* file){
    string s;
    char c;
    while(*file){
        *file >> s;
        s += ' ';
        file->get(c);
        if (c == '\n')
            s += '\n';
        *strptr += s;
        s = ' ';
    }
}
}
