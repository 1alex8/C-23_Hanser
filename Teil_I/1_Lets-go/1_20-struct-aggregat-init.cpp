/*

hier initialisieren wir aggregate der struct punkt. und geben Sie über eine range based for-schleife aus

Aggregate  sind einfache Datenstrukturen, wie z.B. Arrays und einfache struct-typen

*/
/*
Erklärung zu Range based for schleifen:

// Klassische for  →  zwei Semikolons trennen die drei Teile
for (int i = 0 ; i < 10 ; i++)
//             ↑         ↑

// Range-based for  →  ein Doppelpunkt trennt die zwei Teile
for (auto p     : {p1, p2, p3})
//             ↑



for ( Variablendeklaration : Range )
//                         ↑
//                    trennt "was" von "worin"



for (auto p : {p1, p2, p3})
//   ^^^^^^   ^^^^^^^^^^^^
//   "für     "in dieser
//   jedes p   Liste"

*/



#include<iostream>

enum class farbtyp{rot , gelb ,grün, blau};

struct punkt{
    int x;
    int y;
    bool istSichtbar;
    farbtyp farbe;
};

int main(){

    constexpr punkt p1 {100, 200, false, farbtyp::gelb};

    constexpr punkt p2{}; // Alles 0

    constexpr punkt p3{.x = 10, .istSichtbar = true, .farbe = farbtyp::grün};

    for(int i = 1; auto p : {p1, p2, p3}){
        std::cout << i++ << " : " << p.x << " " << p.y << " " << p.istSichtbar << " " << static_cast<int>(p.farbe) << '\n';
    } // das ist eine range based for schleife. Bedingung steckt in der Range.
    // es wird eine initializer List : std::initializer_list<Point> erzeugt durch den Ausdruck: {p1, p2, p3}
    // eine temporäre sequenzielle Liste der drei Struct-Instanzen
    // könnte auch das int i erst in der for schleife initialisieren; das ist ein init- statement


    return 0;
}
/*
Ausgabe:
1 : 100 200 0 1
2 : 0 0 0 0
3 : 10 0 1 2
*/