#include<iostream>
using namespace std;

//globale variable:
int a{1};

//funktion 1 deklaration gleichzeitig definition. nur bei sehr sehr kleinen progs machen
void f1(){
    int c{3};//nur in f1 bekannt also lokal
    cout << "f1: c = " << c << '\n';
    cout << "f1: a = " << a << '\n';
}

int main(){

    cout << "main: globales a = " << a << '\n';
    //c ist hier nicht bekannt weil es eine lokale var im block von f1 ist.

    return 0;
}