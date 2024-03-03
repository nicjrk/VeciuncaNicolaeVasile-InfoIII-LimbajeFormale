#include <iostream>
using namespace std;

int main() {
    string input; // Schimbăm tipul variabilei 'input' în string
    int state = 0; // Starea inițială q0

    cout << "Bine ati venit la automatul de bauturi. Alegeti o bautura:\n";
    cout << "C - Cafea, T - Ceai, A - Cappuccino, H - Ciocolata calda, OK - Confirmare\n";

    while (true) {
        cout << "Selectie: ";
        cin >> input; // Citim o intrare de tip string

        if (input == "X") { // Verificăm dacă utilizatorul vrea să oprească automatul
            cout << "Automat oprit. La revedere!\n";
            break;
        }

        switch (state) {
        case 0: // q0: Starea inițială, așteptăm selectarea unei băuturi
            if (input == "C") {
                state = 1; // Selecție cafea
                cout << "Cafea selectata. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "T") {
                state = 2; // Selecție ceai
                cout << "Ceai selectat. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "A") {
                state = 3; // Selecție cappuccino
                cout << "Cappuccino selectat. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "H") {
                state = 4; // Selecție ciocolată caldă
                cout << "Ciocolata calda selectata. Apasati 'OK' pentru confirmare.\n";
            }
            break;
        case 1: // q1: Cafea selectată
            if (input == "OK") {
                cout << "Cafeaua dumneavoastra este pregatita. Va multumim!\n";
                state = 0; // Revenire la starea q0
            }
            break;
        case 2: // q2: Ceai selectat
            if (input == "OK") {
                cout << "Ceaiul dumneavoastra este pregatit. Va multumim!\n";
                state = 0; // Revenire la starea q0
            }
            break;
        case 3: // q3: Cappuccino selectat
            if (input == "OK") {
                cout << "Cappuccino-ul dumneavoastra este pregatit. Va multumim!\n";
                state = 0; // Revenire la starea q0
            }
            break;
        case 4: // q4: Ciocolată caldă selectată
            if (input == "OK") {
                cout << "Ciocolata calda dumneavoastra este pregatita. Va multumim!\n";
                state = 0; // Revenire la starea q0
            }
            break;
        default:
            cout << "Selectie invalida. Va rugam alegeti din nou.\n";
            state = 0; // În caz de selecție invalidă, revenim la starea q0
        }
    }

    return 0;
}
