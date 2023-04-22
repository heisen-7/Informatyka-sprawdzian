#include <iostream>
#include <string>
using namespace std;

string szyfruj_cezar(string tekst, int klucz) {
    string zaszyfrowany_tekst = "";

    for (int i = 0; i < tekst.length(); i++) {
        char znak = tekst[i];
        if (isalpha(znak) && isupper(znak)) {
            int pozycja = znak - 'A';
            pozycja = (pozycja + klucz) % 26;
            znak = static_cast<char>('A' + pozycja);
        }
        zaszyfrowany_tekst += znak;
    }
    return zaszyfrowany_tekst;
}

int main() {
    string tekst;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, tekst);
    int klucz;
    cout << "Podaj klucz: ";
    cin >> klucz;
    string zaszyfrowany_tekst = szyfruj_cezar(tekst, klucz);
    cout << "Zaszyfrowany tekst: " << zaszyfrowany_tekst << endl;
    return 0;
}
