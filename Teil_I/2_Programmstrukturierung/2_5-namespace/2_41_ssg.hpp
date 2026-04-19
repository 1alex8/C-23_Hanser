/*
Abkürzung für Namespace
*/

namespace SpecialSoftwareGmbH_KlassenBibliothek{
    //...
}
//
namespace ssgkb = SpecialSoftwareGmbH_KlassenBibliothek;//Abkürzung

// using namespace ssgkb; //Benutzung der Abkürzung, aber niemals in einer Headerdatei using nutzen:

/*
Niemals using in einer Header-datei: weil:
sonst sind diese in allen benutzenden Dateien bekannt und es kommt zu Namenskonflikten.

Besser ist die qualifiziierte Ansprache (std::cout z.B.)
Beispiel:
in einer Header-datei soll cout weder mit using std::cout;, noch mit using namespace std; eingeführt, s
sondern  qualifiziert als std::cout benannt werden. 

In .cpp dateien kann in der Regel using namespace std; verwendet werden, aber auch die qualifiziert Nennung mit std:: .
*/