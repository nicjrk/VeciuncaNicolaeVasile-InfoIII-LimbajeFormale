#include <iostream>
#include <stack>
#include <string>

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool verifyIBAN(const std::string& iban) {
    std::stack<char> stack;


    for (int i = 0; i < 2; ++i) {
        if (!isLetter(iban[i])) return false;
    }

  
    for (int i = 2; i < 4; ++i) {
        if (!isDigit(iban[i])) return false;
    }


    for (size_t i = 4; i < iban.length(); ++i) {
        if (!(isDigit(iban[i]) || isLetter(iban[i]))) return false;
    }

  
    return true;
}

int main() {
    std::string iban;
    std::cout << "Introduceți codul IBAN: ";
    std::cin >> iban;

    if (verifyIBAN(iban)) {
        std::cout << "Codul IBAN este valid.\n";
    }
    else {
        std::cout << "Codul IBAN nu este valid.\n";
    }

    return 0;
}
