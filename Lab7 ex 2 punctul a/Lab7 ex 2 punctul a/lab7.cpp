#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Destinatie {
public:
    string nume;
    vector<string> activitati;
    int bugetNecesar;
    string vremePreferata;

    Destinatie(string nume, vector<string> activitati, int bugetNecesar, string vremePreferata)
        : nume(nume), activitati(activitati), bugetNecesar(bugetNecesar), vremePreferata(vremePreferata) {}

    void afiseazaInformatii() {
        cout << "Destinatia: " << nume << endl;
        cout << "Activitati: ";
        for (auto& activitate : activitati) {
            cout << activitate << ", ";
        }
        cout << "\nBuget necesar: " << bugetNecesar << endl;
        cout << "Vreme preferata: " << vremePreferata << endl;
        cout << "-----------------------------\n";
    }
};

int main() {
    vector<Destinatie> destinatii = {
        Destinatie("Stațiune la malul mării", {"scufundări", "snorkeling"}, 1500, "soare"),
        Destinatie("Excursie în munți", {"drumeții", "peisaje spectaculoase"}, 1000, "răcoros"),
        Destinatie("Oraș istoric", {"muzee", "monumente"}, 1200, "moderat")
    };

    int buget = 1300;
    string vremeDorita = "moderat";
    cout << "Destinatii disponibile in functie de buget si vreme dorita:\n";
    for (auto& destinatie : destinatii) {
        if (destinatie.bugetNecesar <= buget && destinatie.vremePreferata == vremeDorita) {
            destinatie.afiseazaInformatii();
        }
    }

    return 0;
}
