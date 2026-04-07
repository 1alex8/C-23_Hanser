#include<iostream>
using namespace std;

int main(){

    int s1 {0};
    int s2 {0};

    //Lies 2 Zahlen ein:
    cout<< "Zwei ganze Zahlen eingeben : ";
    cin >> s1 >> s2;

    // berechne summe:
    int summe =  s1 + s2;

    // Zeige das Ergebnis auf dem Bildschirm an:

    cout << "Summe = " << summe << '\n';

    return 0;
}