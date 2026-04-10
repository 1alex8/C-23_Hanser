#include<iostream>
#include<vector>

struct point{
    int x;
    int y;
};

int main(){
    constexpr point p1 {100 , 200};
    auto p2{p1};//p2 ist auch vom typ point aber nicht const

    p2.x = 99;
    std::cout << "p2.x = " << p2.x << " p2.y = " << p2.y << '\n';

    std::vector<double>v1 {1.1, 2.2, 3.3, 4.4, 5.5};

    auto v2{v1}; // auch vom typ vector<double>

    for(auto wert : v2){
        std::cout << wert << ' ';
    }
    std::cout << '\n';

    for(auto &wert:v2) { //mit referenz
        wert *= 2;
    }
    std::cout << '\n';

    for (auto wert : v2){
        std::cout << wert << ' ';
    }


    return 0;
}