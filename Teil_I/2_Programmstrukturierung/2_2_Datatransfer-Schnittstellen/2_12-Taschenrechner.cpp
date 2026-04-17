/*
Rekursive Syntaxstrukturen werden dabei auf rekursive Strukturen im Programm abgebildet.

Ziel:
- Berechnung beliebig verschachtelter arithmetischer Ausdrücke, wobei hier zur Vereinfachung nur ganze Zahlen
- Leerzeichen sind nicht erlaubt; keine aufwendige Syntaxprüfung
- Vorrangregeln sollen  beachtet werden
*/

/*
Aufgaben:
a) Das Programm soll ein Promptzeichen >> ausgeben und dann die Eingabe des Ausdrucks erwarten
b) Der Ausdruck wird mit [Enter] abgeschlossen. Anschließend wird das Ergebnis ausgegeben
c) a) und b) werden wiederholt bis 'e' eingegeben wird 
*/

//Ausgabe:
/*
>>3+3
6
>>(28*1)-4/2
26
>>(12+3)*4
60
>>e
*/

#include<iostream>
#include<cctype>//für isdigit();

[[nodiscard]]long ausdruck(char& c);

[[nodiscard]]long summand(char& c);

[[nodiscard]]long faktor(char& c);

[[nodiscard]]long zahl(char& c);

int main(){

    char ch{'e'};
    do{
        std::cout << "\n>>";
        std::cin.get(ch);
        if(ch != 'e'){
            std::cout << ausdruck(ch);
        }
    }while(ch != 'e');

}

long ausdruck(char& c){             // übergabe per referenz
    long a{0l};                     // Hilfsvar für Ausdruck
    if(c == '-'){
        std::cin.get(c);            // - im Eingabestromüberspringen
        a = -summand(c);            // Rest an summand übergeben
    }else{
        if(c == '+'){
            std::cin.get(c);        // + im Eingabestrom überspringen
        }
        a = summand(c);
    }
    while(c == '+' || c =='-'){
        if(c == '+'){               // + überspringen
            std::cin.get(c);
            a += summand(c);
        }else{
            std::cin.get(c);        // - überpringen
            a -= summand(c);
        }
    }
    return a;
}

long summand(char& c){
    long s{faktor(c)};
    while(c == '*' || c == '/'){
        if(c == '*'){
            std::cin.get(c);        // * überspringen
            s *= faktor(c);         
        }else{
            std::cin.get(c);
            s /= faktor(c);
        }
    }
    return s;
}

long faktor(char& c){
    long f{0l};

    if ( c == '('){
        std::cin.get(c);            // ( überspringen
        f = ausdruck(c);

        if(c != ')')
            std::cerr << "Rechte Klammer fehlt!\n";
        else    
            std::cin.get(c);        // ) überspringen
    }
    else{
        f = zahl(c);
    }
    return f;
}

long zahl(char& c){
    long z{0l};
    //isdigit() ist eine funktion, das zu true ausgewertet wird,
    //falls c eine Ziffernfolge ist. Die Verwendung setzt #include<cctype> voraus
    while(isdigit(c)){                          //d.h. c >= '0' && c <= '9'
        //Zur Subtraktion von '0' siehe S.56
        z = 10l * z + static_cast<long>(c - '0');
        std::cin.get(c);
    }

    return z;
}