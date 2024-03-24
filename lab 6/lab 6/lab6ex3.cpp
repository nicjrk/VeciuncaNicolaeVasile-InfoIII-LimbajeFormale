#include <iostream>
#include <regex>

using namespace std;
int main() {
  
    regex codPostalRegex("^[1-9][0-9][0-9]{3}$");


    string codPostal = "12345";

   
    bool esteValid = regex_match(codPostal, codPostalRegex);

    if (esteValid) {
        cout << "Codul postal este valid.\n";
    }
    else {
        cout << "Codul postal nu este valid.\n";
    }

    return 0;
}
