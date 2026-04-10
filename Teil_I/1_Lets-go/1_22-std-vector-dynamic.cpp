// Vectors are dynamic. means if there is an additinal element added the array
// will get bigger automatically.

#include <vector>
#include <cstddef>//für size_t
#include <iostream>

int main(){

    std::vector<int>myData;
    int wert;
    std::cout<< "Gib Werte >= 0 ein \n";
    
    while(true){
        std::cout << "Wert: ";
        std::cin >> wert;
        if(wert < 0) break;
        myData.push_back(wert);
    }
    std::cout << "Es wurden folgende Werte eingegeben: \n";

    for(size_t i = 0; i < myData.size(); i++){
        std::cout << i << ". Wert : " << myData.at(i) << '\n';
    }


    return 0;
}

/*
Ausgabe: 
Gib Werte >= 0 ein 
Wert: 33
Wert: 44
Wert: 55
Wert: 66
Wert: 77
Wert: 34
Wert: 23
Wert: 0
Wert: -2
Es wurden folgende Werte eingegeben: 
0. Wert : 33
1. Wert : 44
2. Wert : 55
3. Wert : 66
4. Wert : 77
5. Wert : 34
6. Wert : 23
7. Wert : 0
*/