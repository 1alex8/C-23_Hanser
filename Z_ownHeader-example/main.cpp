#include "particle.h"   // Hier binden wir unseren Header ein
#include <iostream>

int main() {
    // Particle-Struct befüllen (wie eine Instanz in Go)
    Particle p;
    p.lifetime = 5;
    p.speed    = 1.5;
    p.x        = 0.0;
    p.y        = 0.0;

    // Solange das Partikel lebt, bewegen und ausgeben
    while (isAlive(p)) {
        std::cout << "--- Tick ---\n";
        printParticle(p);
        moveParticle(p);
    }

    std::cout << "Partikel ist tot.\n";
    return 0;
}


/*
Compile and execute:
g++ main.cpp particle.cpp -o simulation
./simulation
*/
/*
Ausgabe: --- Tick ---
Position: (0, 0)
Speed:    1.5
Lifetime: 5
--- Tick ---
Position: (1.5, 1.5)
Speed:    1.5
Lifetime: 4
... (usw.)
Partikel ist tot.
*/