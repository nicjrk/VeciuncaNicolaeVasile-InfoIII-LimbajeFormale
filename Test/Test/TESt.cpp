#include <iostream>
using namespace std;

/*
enum State { S1, S2, S3 };
enum Output { O1, O2, O3 };


class MooreMachine {
    State currentState;

public:
    MooreMachine() : currentState(S1) {}

    Output transition(char input) {
        switch (currentState) {
            //normal = S1 tensiune normala
        case S1:
            if (input == 'A') {
                
                return O1;
            }
            else if (input == 'B') {
                
                currentState = S2;
                return O1;
            }
            else if (input == 'C') {
              
                currentState = S3;
                return O1;
            }
            break;
            //tensiune crescuta S2= tensiune crescuta 
        case S2:
            if (input == 'A') {
                currentState = S1;
               
                return O2;
            }
            else if (input == 'B') {
               
                return O2;
            }
            else if (input == 'C') {
              
                currentState = S3;
                return O2;
            }
            break;
            //stop cardiac S3 = stop cardiac 
        case S3:
            if (input == 'A') {
               
                currentState = S1;
                return O3;
            }
            else if (input == 'B') {
                
                currentState = S2;
                return O3;
            }
            else if (input == 'C') {
               
                return O3;
            }
            break;
        }
        
        return O1;
    }
};

int main() {
    MooreMachine machine;
    string inputs = "ABABCBCBCCCAB";

    for (char input : inputs) {
        Output output = machine.transition(input);
        cout << "Input: " << input << ", Output: O" << (output + 1) << endl;
    }

    return 0;
}


*/





/*

#include <iostream>

class Banca {
public:
    enum State {
        INACTIV,   
        ACTIV,     
        INCHIS      
    };

    Banca() : currentState(INACTIV), sold(0) {}

    void activareCont() {
        if (currentState == INACTIV) {
            currentState = ACTIV;
            cout << "contul a fost activat.\n";
        }
        else if(currentState == ACTIV)
        {
            currentState = INACTIV;
            cout << "contul este inactiv = " << sold << "\n";
            sold = 0;
        } 
    }

    void depunereBani(double soldTotal) {
        if (currentState == ACTIV) {
            sold += soldTotal;
            cout << "au fost depusi: " << soldTotal << "\n";
        } else {
            cout << "depunerea a esuat. Contul nu este activ.\n";
        }
    }

    void scoatereBani(double soldTotal) {
        if (currentState == ACTIV && sold >= soldTotal) {
            sold -= soldTotal;
            cout << "au fost retrasi: " << soldTotal << "\n";
        } else {
           cout << "retragerea a esuat, fonduri insuficiente\n";
        }
    }

    void verificareCont() {
        if (currentState == ACTIV) {
            cout << "soldul curent: " << sold << "\n";
        } else {
           cout << "verificarea soldului \n";
        }
    }

    void inchidereCont() {
        if (currentState == ACTIV) {
            currentState = INCHIS;
            cout << "contul a fost inchis. Soldul = " << sold << "\n";
            sold = 0;
        }
    }

private:
    State currentState;
    double sold;
};

int main() {
    Banca banca;
    banca.activareCont();
    banca.depunereBani(1000);
    banca.verificareCont();
    banca.scoatereBani(500);
    banca.verificareCont();
    banca.inchidereCont();

    return 0;
}
*/
























