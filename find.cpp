
/*
std::find() is a standard algorithm provided by the C++ Standard Template Library (STL). 
It is used to find the first occurrence of a given value in a specified range. 
The function works with containers that provide iterators, such as arrays, vectors, lists, and deques.
*/
/*
Prototyp = std::find(first, last, value);

if the value is found, it returns an iterator to its position; otherwise, it returns the end iterator.


Parameters:

first: Iterator to the first element of range.
last: Iterator to the theoretical element just after the last element of range.
value: Value to be searched.
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 6, 2, 9};

    // Sorting the vector
    sort(v.begin(), v.end());

    // Search for element 6
    auto it = find(v.begin(), v.end(), 6);

    // Print index
    cout << distance(v.begin(), it);

    return 0;
}