#include <iostream>
using namespace std;

enum State { S1, S2 };
enum Output { O1, O2 };

class MooreMachine {
    State currentState;

public:
    MooreMachine() : currentState(S1) {}

    Output transition(char input) {
        switch (currentState) {
        case S1:
            if (input == 'A') {
                return O1;
            }
            else if (input == 'B') {
                currentState = S2;
                return O1;
            }
            break;
        case S2:
            if (input == 'A') {
                currentState = S1;
                return O2;
            }
            else if (input == 'B') {
                return O2;
            }
            break;
        }
        return O1; 
    }
};

int main() {
    MooreMachine machine;
    string inputs = "ABAB"; 

    for (char input : inputs) {
        Output output = machine.transition(input);
        cout << "Input: " << input << ", Output: O" << (output == O1 ? "1" : "2") << endl;
    }

    return 0;
}
