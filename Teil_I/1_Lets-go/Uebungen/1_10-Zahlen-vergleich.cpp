#include<iostream>
#include<print>

int main(){

    double x,y,z;

    do{
        std::cout << "Geben Sie 3 Float zahlen ein: ";
        std::cin >> x >> y >> z;
    }while(x >= y);
    if( z > x && z < y){
        std::print("Zahl 3: {} liegt innerhalb des Bereich {} - {}\n", z, x, y);
    }else if(z > y){
        std::print("z liegt außerhalb des gültigen Bereichs\n");
    }else std::print("Fehler ente du");



    return 0;
}