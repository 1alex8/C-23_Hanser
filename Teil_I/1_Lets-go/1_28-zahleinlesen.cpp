/*
falls das format mit dem aktuell erwarteten Datentyp nicht übereinstimmt, wird dei Schleife abgebrochen, bsp. wenn ein char eingegeben wird.
*/

#include<iostream>


int main(){

    int i {0};
    double d{0.0};

    while(std::cin >> i >> d){
        std::cout << i << '\n' << d <<'\n';
    }

    return 0;
}

/*
ausgabe:
3 2
3
2
j

*/