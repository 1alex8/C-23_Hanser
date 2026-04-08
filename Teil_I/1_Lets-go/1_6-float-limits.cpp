#include<iostream>
#include<limits>

using namespace std;

int main(){

    cout<<"Grenzwerte für Float-Zahl-Typen : \n\n";
    
    cout << "Float-min: " << numeric_limits<float>::min() << '\n';
    cout << "Float-max: " << numeric_limits<float>::max() << "\n\n";
    
    cout << "double-min: " << numeric_limits<double>::min() << '\n';
    cout << "double-max: " << numeric_limits<double>::max() << "\n\n";

    cout << "long double-min: " << numeric_limits<long double>::min() << '\n';
    cout << "long double-max: " << numeric_limits<long double>::max() << "\n\n";

    cout << "float und double Zahlen entsprechen ";

    if(!numeric_limits<float>::is_iec559){
        cout << "nicht ";
    }
    cout << " dem IEC 559 (=IEEE754) Standard. \n";

    return 0;
}

/*
Ausgabe: 

Grenzwerte für Float-Zahl-Typen : 

Float-min: 1.17549e-38
Float-max: 3.40282e+38

double-min: 2.22507e-308
double-max: 1.79769e+308

long double-min: 3.3621e-4932
long double-max: 1.18973e+4932

float und double Zahlen entsprechen  dem IEC 559 (=IEEE754) Standard. 
*/