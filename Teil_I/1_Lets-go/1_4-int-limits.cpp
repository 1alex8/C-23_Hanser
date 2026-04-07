// in diesem Programm werden die limits der verschiedenen INT DT's dargestellt
// sowohl Speicher als auch Zahlen limits

/*
Spezial DT's: size_t; ptrdiff_t
Header: <cstddef>
*/
/*
Darstellung der Limits:
std::numeric_limits<DT>::min()
std::numeric_limits<DT>::max()
Header: <limits>

wenn man das std:: weglassen will:
using std::numeric_limits;
*/

#include<cstddef> // für size_t und ptrdiff_t
#include<limits> // für numeric_limits<dt>::min/max();
#include<iostream>
#include<print>//für std::print

int main(){

    std::print("Grenzwerte für Ganzzahl-Typen: \n");

    std::cout << "int Minimium: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "int Maximum: " << std::numeric_limits<int>::max() << '\n';
    
    std::cout << "long Minimum: " << std::numeric_limits<long>::min() << '\n';
    std::cout << "long Maximum: " << std:: numeric_limits<long>::max() << '\n';

    std::cout << "long long Minimum: " << std::numeric_limits<long long>::min() << '\n';
    std:: cout << "long long Maximum: " << std::numeric_limits<long long>::max() << "\n\n";

    std::cout <<"ptrdiff_t Minimum: " << std::numeric_limits<ptrdiff_t>::min() << '\n';
    std::print("ptrdiff_t Maximum: {} \n\n", std::numeric_limits<ptrdiff_t>::max());

    std::cout << "unsigned Maxima (Minimum ist immer 0) : \n\n";

    std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::max() << '\n';
    std::cout << "unsigned long: "<< std::numeric_limits<unsigned long>::max() << '\n';
    std::cout << "unsigned long long: " << std::numeric_limits<unsigned long long>::max() <<"\n\n";

    std::cout << "size_t: " << std::numeric_limits<size_t>::max() << "\n\n";

    std::print("Anzahl der Bytes für: \n\n");

    std::print("int        = {}\n", sizeof(int));
    std::print("long       = {}\n", sizeof(long));
    std::print("long long  = {}\n", sizeof(long long));
    std::cout << "size_t     = " << sizeof(size_t) << '\n';
    std::cout << "ptrdiff_t  = " << sizeof(ptrdiff_t) << '\n';

    return 0;
}

/*
Ausgabe: 
Grenzwerte für Ganzzahl-Typen: 
int Minimium: -2147483648
int Maximum: 2147483647
long Minimum: -2147483648
long Maximum: 2147483647
long long Minimum: -9223372036854775808
long long Maximum: 9223372036854775807

ptrdiff_t Minimum: -9223372036854775808
ptrdiff_t Maximum: 9223372036854775807 

unsigned Maxima (Minimum ist immer 0) : 

unsigned int: 4294967295
unsigned long: 4294967295
unsigned long long: 18446744073709551615

size_t: 18446744073709551615

Anzahl der Bytes für: 

int        = 4
long       = 4
long long  = 8
size_t     = 8
ptrdiff_t  = 8
*/