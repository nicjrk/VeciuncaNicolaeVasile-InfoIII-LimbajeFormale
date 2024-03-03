#include <iostream>
using namespace std;

int main() {
    string input; 
    int state = 0; 

    cout << "Bine ati venit la automatul de bauturi. Alegeti o bautura:\n";
    cout << "C - Cafea, T - Ceai, A - Cappuccino, H - Ciocolata calda, OK - Confirmare\n";

    while (true) {
        cout << "Selectie: ";
        cin >> input; 

        if (input == "X") { 
            cout << "Automat oprit. La revedere!\n";
            break;
        }

        switch (state) {
        case 0: 
            if (input == "C") {
                state = 1; 
                cout << "Cafea selectata. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "T") {
                state = 2; 
                cout << "Ceai selectat. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "A") {
                state = 3;
                cout << "Cappuccino selectat. Apasati 'OK' pentru confirmare.\n";
            }
            else if (input == "H") {
                state = 4;
                cout << "Ciocolata calda selectata. Apasati 'OK' pentru confirmare.\n";
            }
            break;
        case 1: 
            if (input == "OK") {
                cout << "Cafeaua dumneavoastra este pregatita. Va multumim!\n";
                state = 0; 
            }
            break;
        case 2: 
            if (input == "OK") {
                cout << "Ceaiul dumneavoastra este pregatit. Va multumim!\n";
                state = 0; 
            }
            break;
        case 3: 
            if (input == "OK") {
                cout << "Cappuccino-ul dumneavoastra este pregatit. Va multumim!\n";
                state = 0; 
            }
            break;
        case 4:
            if (input == "OK") {
                cout << "Ciocolata calda dumneavoastra este pregatita. Va multumim!\n";
                state = 0; 
            }
            break;
        default:
            cout << "Selectie invalida. Va rugam alegeti din nou.\n";
            state = 0;
        }
    }

    return 0;
}
