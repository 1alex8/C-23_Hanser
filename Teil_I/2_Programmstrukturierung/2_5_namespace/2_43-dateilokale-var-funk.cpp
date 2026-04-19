// Gültigkeitsbereiche auf Datei beschränken

/*
Die Gültigkeit einer Variable oder Funktion
wird mithilfe eines anonymen Namespace
auf eine Datei beschränkt.
*/

#include <iostream>

namespace{                      // anonynemr Namespace
    int dateilokal;             // außerhalb der Datei nicht bekannt.
    int summe(int a, int b){    // außerhalb der Datei nicht bekannt.
        return a + b;
    }
}

int main(){
    dateilokal = summe(42, 43);
}