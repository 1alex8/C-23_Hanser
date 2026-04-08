// Dieses Programm zeigt wie sich die Zahlen nahe der Zahlengrenzen der DT's verhalten


#include<iostream>
#include<limits>
#include<print>
using namespace std;

int main(){

    int ai{50000};
    int bi{1'000'000};
    int ci{ai * bi};

    print("int Zahlen haben auf ihrem System {} Bits\n", 8 * sizeof(int));
    cout << "Rechnung mit int: ";
    cout << ai <<'*' << bi << " = " << ci <<'\n';

    //Ausgabe -1539607552 statt 50000000000 bei 32 int

    long al{50000L};
    long bl{1'000'000L};

    long cl{al * bl};

    print("long Zahlen haben auf ihrem System {} Bits\n", 8 * sizeof(long));

    cout << "Rechnung mit Long : ";
    cout << al << '*' << bl << '=' << cl << '\n';
    cout << "long overflow produzieren: \n";
    al = numeric_limits<long>::max() / 2 + 1000;
    cout << "2 * " << al << " = " << (2*al) << " ?\n";

    return 0;
}