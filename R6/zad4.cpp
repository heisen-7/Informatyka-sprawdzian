#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int doDziesietnego(string num, int base) {
    int decimal = 0;
    int len = num.length();
    for (int i = 0; i < len; i++) {
        decimal += (num[len-i-1] - '0') * pow(base, i);
    }
    return decimal;
}

string doBazy(int num, int base) {
    string result = "";
    while (num > 0) {
        result = to_string(num % base) + result;
        num /= base;
    }
    return result;
}

int main() {
    string num1, num2, num3;
    int base;
    cout << "Podaj podstawę systemu: ";
    cin >> base;
    cout << "Podaj pierwszą liczbę: ";
    cin >> num1;
    cout << "Podaj drugą liczbę: ";
    cin >> num2;
    cout << "Podaj trzecią liczbę: ";
    cin >> num3;

    int decimalSum = doDziesietnego(num1, base) + doDziesietnego(num2, base) + doDziesietnego(num3, base);
    string result = doBazy(decimalSum, base);
    cout << "Wynik dodawania: " << result << endl;

    return 0;
}