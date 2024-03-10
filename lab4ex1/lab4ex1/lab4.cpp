#include <iostream>
#include <string>

using namespace std;
char simulateDFA(const string& input) {
    char state = 'A';

    for (char symbol : input) {
        switch (state) {
        case 'A':
            if (symbol == '0') state = 'B'; // regula 1
            break;
        case 'B':
            if (symbol == '0') state = 'A'; // regula 3
 
            break;
        }
    }

   
    return state;
}

int main() {
    string inputs[] = { "010", "110", "1001" };

    for (const string& input : inputs) {
        char finalState = simulateDFA(input);
       cout << "Pentru secventa \"" << input << "\", starea finala este \"" << finalState << "\".\n";
    }

    return 0;
}
