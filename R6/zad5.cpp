#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Wczytanie liczby 16-kowej
    string hex_address;
    cout << "Podaj adres 16-kowy: ";
    cin >> hex_address;

    // Konwersja liczby 16-kowej na liczbe calkowita
    stringstream ss;
    ss << hex_address;
    int address;
    ss >> hex >> address;

    // Wczytanie liczby komorek
    int offset;
    cout << "Podaj przesuniecie w komorkach: ";
    cin >> offset;

    // Obliczenie przesunietego adresu
    address += offset;

    // Wypisanie wyniku w formacie 16-kowym
    cout << "Przesuniety adres: 0x" << hex << uppercase << address << endl;

    return 0;
}