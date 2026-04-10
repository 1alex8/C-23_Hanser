#include<array>
#include<cstddef>
#include<iostream>
using namespace std;

int main(){

    array<double, 5>arr1;
    for (size_t i = 0; i < arr1.size(); i++){
        cout<< arr1.at(i)<<" ";
    }
    cout<<'\n';

    array<double, 4>arr2{1.2, 2.3, 3.4};
    for (size_t i = 0; i < arr2.size(); i++){
        cout<< arr2.at(i)<<" ";
    }
    cout << '\n';

    array arr3{0,1,2,3};
    for (size_t i = 0; i < arr3.size(); i++){
        cout<< arr3.at(i)<<" ";
    }
    cout<<'\n';

    return 0;
}

/*
Ausgabe:
3.26083e-322 6.95261e-310 6.95142e-310 4.94066e-324 6.95261e-310 
1.2 2.3 3.4 0 
0 1 2 3 
*/