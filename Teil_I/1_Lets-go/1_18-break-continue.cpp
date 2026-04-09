#include<iostream>
#include<print>

using namespace std;

int main(){

    while(true){
        char c{'x'};
        cout<<"Wählen Sie a, b, x = Ende : ";
        cin >> c;

        if(c == 'a' || c == 'A'){
            cout << "Programm A \n";
            continue;
        }else if(c == 'b'){
            cout << "Prog b\n";
            continue;
        }else if(c == 'x' || c == 'X') break;
        else{
            cout << "Falsche Eingabe\n";
        }
    }

    return 0;
}

/*
Ausgabe: 
Wählen Sie a, b, x = Ende : a
Programm A 
Wählen Sie a, b, x = Ende : b
Prog b
Wählen Sie a, b, x = Ende : c
Falsche Eingabe
Wählen Sie a, b, x = Ende : x
*/