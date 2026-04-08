#include<iostream>
#include<print>

int main(){

    float a {1.234567e-7f};
    float b {1.00000f};
    auto c {-b};

    std::cout<<"Ungenaugikeit bei float Arithmetik: \n";
    std::cout << "(a + b) + c = " << (a + b) + c << "\n"; // 1.19209e-7
    std::cout << "a + (b + c) = " << a + (b + c) << '\n'; // 1.23457e-7;

    return 0;
}