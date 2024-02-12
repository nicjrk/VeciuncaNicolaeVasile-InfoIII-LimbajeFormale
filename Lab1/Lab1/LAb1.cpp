#include <iostream>
#include <string>
using namespace std;

// Problema 1
/*
// Operatia de concatenare
string concatenate(const string& s1, const string& s2) {
    return s1 + s2;
}

// Operatia de inversare
string invers(const string& s) {
    string reversed = string(s.rbegin(), s.rend());
    return reversed;
}

// Operatia de substitutie
string substituie(const string& s, char a, char b) {
    string result = s;
    for (char& c : result) {
        if (c == a) c = b;
    }
    return result;
}

// Operatia de lungime
size_t lungime(const string& s) {
    return s.length();
}
/
*/
// Operatia de repetare
string repeat(const string& s, int n) {
    string result;
    for (int i = 0; i < n; ++i) result += s;
    return result;
}

// Operatia de inversare
string invers(const string& s) {
    string reversed = string(s.rbegin(), s.rend());
    return reversed;
}
// Operatia de extractie
string extract(const string& s, int i, int j) {
    if (i > j || i < 0 || j >= s.length()) return "";
    return s.substr(i, j - i + 1);
}

// Operatia de inlocuire
string replace(const string& s, const string& sub, const string& new_sub) {
    size_t pos = s.find(sub);
    if (pos == string::npos) return s; // Sub-sirul nu a fost gasit
    return s.substr(0, pos) + new_sub + s.substr(pos + sub.length());
}

int main() {
    /*
   // prima problema

    string s1 = "abc";
    string s2 = "xyz";
    cout << "Concatenare: " << concatenate(s1, s2) << endl;
    cout << "Invers: " << invers(s1) << endl;
    cout << "Substituie: " << substituie(s1, 'a', 'x') << endl;
    cout << "Lungime: " << lungime(s1) << endl;
    */
    // a doua problema
string s = "abc123";
cout << "Repeat: " << repeat(s, 2) << endl;
cout << "Extract: " << extract(s, 1, 3) << endl;
cout << "Replace: " << replace(s, "123", "xyz") << endl;

return 0;
}