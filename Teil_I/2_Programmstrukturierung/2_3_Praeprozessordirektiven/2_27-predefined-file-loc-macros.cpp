#include <iostream>

int main(){
    std::cout << "Datei " << __FILE__<< ", Zeile : " << __LINE__ << ", Funktion:" << __func__ << '\n';
}