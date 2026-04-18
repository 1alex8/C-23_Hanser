#include <iostream>
#include <cmath>

constexpr bool test_ein {true};

int main() {
    double x = -4.0;
    double y;

    if(test_ein){
        if(x<0) std::cout << "sqrt(negative_Zahl)!\n";
    }

    y = sqrt(x);

    std::cout << "y = " << y << std::endl;

    x = 9.0;
    if(test_ein){
        if(x < 0) std::cout <<"sqrt(negative_Zahl) " << x << "!\n";
    }
    y = sqrt(x);

    std::cout << "y = " << y << std::endl;

    return 0;
}