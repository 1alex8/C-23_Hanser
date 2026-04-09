/*
Darstellung von boolschen variablen als Text oder Zahl
*/

/*
Umwandlung in Text :
std::cout.setf(ios_base::boolalpha);
Umwandlung in Zahl:
std::cout.unsetf(ios_base::boolalpha);
*/

#include<iostream>

int main(){

    bool istGroßbuchstabe {false};

    char c{'*'};

    std::cin >> c;

    istGroßbuchstabe = (c >= 'A' && c <= 'Z');

    std::cout << istGroßbuchstabe <<'\n';
    
    std::cout << std::boolalpha;
    std::cout << istGroßbuchstabe << '\n';

    std::cout << std::noboolalpha;
    std::cout<< istGroßbuchstabe << '\n';


    return 0;
}

/*
Ausgabe:
B
1
true
1
*/