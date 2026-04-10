//Strings sind eine Standard klasse in c++

#include<iostream>
#include<cstddef>
#include<string> //standard string einschließen.


int main(){
    
    //String-Objekt anlegen und mit "Hallo" initialisieren:
    std::string aString {"hallo"};
    std::cout << aString << "\n\n"; //string ausgeben

    //Beim Vektor wäre stattdessen für die Ausgabe eine Schleife notwendig
    //Die Anzahl der Zeichen kann bei Strings mit .length() ermittelt werden.
    //String zeichenweise ausgeben, ungeprüfter Zugriff wie bei Vector:
    for(size_t i = 0; i < aString.length(); i++){
        std::cout<< aString[i];
    }
    std::cout << "\n\n";

    //String zeichenweiße ausgeben mit Indexprüfung via .at(i)    :
    for(size_t i = 0; i < aString.length(); i++){
        std::cout << aString.at(i);
    }
    std::cout << "\n\n";

    // Kopie des Strings erzeugen:
    std::string stringCopy (aString);
    std::cout << stringCopy << "\n\n";

    //andere initialiserung einer Kopie:
    const std::string neuerString {"neu"};
    stringCopy = neuerString; // Kopie durch Zuweisung
    std::cout << stringCopy << "\n\n";

    // Zuweisung einer Zeichenkette:
    stringCopy = "Buchstaben"; // Kopie durch Zuweisung
    std::cout << stringCopy << "\n\n";

    //Zuweisung eines eines char zu einem String:
    aString = 'X';
    std::cout << aString << "\n\n"; // Ausgabe: X

    //Verknüpfen von Strings mit +=
    aString += stringCopy;
    std::cout << aString << "\n\n"; // Ausgabe : XBuchstaben

    //Strings verknüpfen mit + Operator
    aString = stringCopy + " ABC";
    std::cout << aString << "\n\n"; // Ausgabe: Buchstaben ABC

    aString = "123 " + stringCopy;
    std::cout << aString << "\n\n"; //Ausgabe : 123 Buchstaben

    // aString = std::string("123") + "123"; //Das geht nicht eklärung in Chapter 8;

    std::cout << "\n\n Vergleiche von Strings: \n\n";
    
    //Vergleiche von Strings:

    std::string a {"Albert"};
    std::string b{a};

    if(a == b){
        std::cout << a << " == " << b << '\n';
    }else{
        std::cout << a << " != " << b << '\n';
    }

    const std::string z{"Alberta"};
    if(a < z){
        std::cout << a << " < " << z <<'\n';
    }else if( a > z){
        std::cout << a << " > " << z << '\n';
    }else std::cout << a << " == " << z << '\n'; // Ausgabe: Albert < Alberta

    if (a != z){
        std::cout << z << " != " << a <<'\n'; // Ausgabe : Alberta != Albert
    }

    //String initialisiersliste :
    const std::string str{'a', 'b', 'c'};
    std::cout << "Mit Initialisierungliste erzeugter String : " << str << '\n'; //Ausgabe:  Mit Initialisierungliste erzeugter String : abc

    return 0;
}


/*
Ausgabe: 
hallo

hallo

hallo

hallo

neu

Buchstaben

X

XBuchstaben

Buchstaben ABC

123 Buchstaben



 Vergleiche von Strings: 

Albert == Albert
Albert < Alberta
Alberta != Albert
Mit Initialisierungliste erzeugter String : abc
*/