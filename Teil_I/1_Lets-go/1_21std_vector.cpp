/*
Vectoren::
Prototyp:
std::vector<dt>vector_name(if wanted: number of elements){elements};

Objekt anlegen:
std::vector<float>Name;
Zuweisung:
Name = andererVektor;

Objekt anlegen + inititalisieren mit anderem Vekotor objekt:
std::vektor<float>sortedVector{otherVector};
*/

#include<algorithm>//enthält sortierfunktionen z.B.sort(): std::ranges::sort(vector_name); sortiert aufsteigend:
#include<cstddef>//enhält size_t
#include<iostream>
#include<vector>

int main(){

    std::vector<double>kosten(12);// Tabelle mit 12 double Werten

    //füllen der Tabelle mit beliebigen Daten, ddabei Typecast int->double
    //DieFuktion v.size() gibt eine Zahl vom Typ size_t zurück
    //Deshalb hat die Laufvar auch den Typ size_t

    for(size_t i = 0; i < kosten.size(); i++){
        kosten.at(i) = static_cast<double>(150 - i * i) / 10.0;
    }

    for(size_t i = 0; i < std::size(kosten); i++){
        //hier wird kosten[i] statt kosten.at(i) genutzt, 
        //aber vorsicht kosten.at wird geprüft ob es im Bereich des reservierten Speichers ist, 
        //kosten[i] nicht
        std::cout << i << " : " << kosten[i] << '\n';
    }
    //Brechnung und Anzeige von Summe und Mittelwert.
    double sum {0.0};

    for(size_t i = 0; i < kosten.size() ; i++){
        sum += kosten.at(i);
    }
    std::cout << "summe = " << sum << '\n';
    std::cout << "Mittelwert = " << sum / kosten.size() << '\n'; //impicit type cast to double 

    //Maximum anzeigen:
    double max {kosten.at(0)};
    for(size_t i = 0; i < kosten.size(); i++){
        if(max < kosten.at(i)){
            max = kosten.at(i);
        }
    }
    std::cout<< "Maximum = " << max << "\n\n";

    //zweite Tabelle deklarieren und mit der ersten inititalisieren
    std::vector<double>sortedKosten{kosten};
    // sortedKosten aufsteigend sortieren
    std::ranges::sort(sortedKosten);

    //andere Variante zum sortieren: ist std::sort(vector.begin(), vector.end());
    std::sort(sortedKosten.begin(), sortedKosten.end()); // wenn man es umdrehen möchte kann man auch einfach begin und end umdrehen

    //nur ein sort ist notwendig. beide zu verwenden war nur zur demonstration
    

    //ausgabe mit der laufenden nummer:
    std::cout << "Ausgabe der sortierten Liste: \n";
    for(size_t i = 0; i < sortedKosten.size(); i++){
        std::cout << i << " = " << sortedKosten.at(i) << "\n";
    }

    //ausgabe mit einem range_based for loop. Bedeuted das die laufende Nummer nicht benötigt wird:
    std::cout<<"\nAusgabe über range based For-Loop: \n";
    for(auto liste : sortedKosten){
        std::cout << liste << '\n';
    }

    return 0;
}

/*
Ausgabe: 
0 : 15
1 : 14.9
2 : 14.6
3 : 14.1
4 : 13.4
5 : 12.5
6 : 11.4
7 : 10.1
8 : 8.6
9 : 6.9
10 : 5
11 : 2.9
summe = 129.4
Mittelwert = 10.7833
Maximum = 15

Ausgabe der sortierten Liste: 
0 = 2.9
1 = 5
2 = 6.9
3 = 8.6
4 = 10.1
5 = 11.4
6 = 12.5
7 = 13.4
8 = 14.1
9 = 14.6
10 = 14.9
11 = 15

Ausgabe über range based For-Loop: 
2.9
5
6.9
8.6
10.1
11.4
12.5
13.4
14.1
14.6
14.9
15
*/