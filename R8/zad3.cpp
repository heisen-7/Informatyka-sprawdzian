#include <iostream>
#include <string>
using namespace std;

string szyfruj_cezar(string tekst, int klucz1, int klucz2) {
    string zaszyfrowany_tekst = "";

    for (int i = 0; i < tekst.length(); i++) {
        char znak = tekst[i];
        if (isalpha(znak) && isupper(znak) && i%2!=0) {
            int pozycja = znak - 'A';
            pozycja = (pozycja + klucz1) % 26;
            znak = static_cast<char>('A' + pozycja);
        }
        if (isalpha(znak) && isupper(znak) && i%2==0) {
            int pozycja = znak - 'A';
            pozycja = (pozycja + klucz2) % 26;
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
    int klucz1, klucz2;
    cout << "Podaj klucz 1 (dla nieparzystych): ";
    cin >> klucz2;
    cout << "Podaj klucz 2 (dla parzystych): ";
    cin >> klucz1;
    string zaszyfrowany_tekst = szyfruj_cezar(tekst, klucz1, klucz2);
    cout << "Zaszyfrowany tekst: " << zaszyfrowany_tekst << endl;
    return 0;
}
