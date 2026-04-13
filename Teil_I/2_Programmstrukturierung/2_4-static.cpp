/*
Keyword: static

static variablen wirken wie ein gedächtnis für eine funktion. 
Sie verlieren ihren Wert zwischen den Funktionsaufrufen nicht.

Prototyp:
static dt varname;

ist der Wert schon zur Compilierzeit bekannt durch const
beispiel:
static int x {5};
so wird die variable schon zur Komilierzeit initialisiert.

Andernfalls sobald der Wert bekannt ist.

Anwendungsbeispiel:
ein Zähler der Zählt wie oft eine func aufgerufen wurde.

*/

#include <iostream>

void func(){
    static int anz{0}; // zählt die anzahl der aufrufe
    std::cout <<"Anzahl: " << ++anz << '\n';
}

int main(){
    for(int i = 0; i < 3; i++){
        func();
    }
}



/*
Ausgabe: 
Anzahl: 1
Anzahl: 2
Anzahl: 3
*/