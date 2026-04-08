#include<iostream>
#include<print>

int main(){

    int a {2};
    int b {4};
    
    std::cout << "a = " << a << "and b = " << b << '\n';
    std::print("a++ = {}\n", a++);
    std::cout << "a after the a++ was finished: " << a << '\n';
    std::cout << "--b = " << --b << '\n';

    std::cout << "\n\n" << "Beides gilt jeweils für ++ und --";

    return 0;
}