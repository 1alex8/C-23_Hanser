#include<iostream>

long long fakultät (int);//Prototyp / deklaration
using namespace std;

int main(){
    int n{0};


    cout << "Fakultätszahl?: ";
    cin >> n;
    cout << "Das Ergbenis ist " << fakultät(n) << endl;//aufruf

    return 0;
}

long long fakultät (int zahl){ //funktionsimplemention / definition
    long long fak{1};
    for (int i = 2; i <= zahl; i++){
        fak *= i;
    }
    return fak;
}