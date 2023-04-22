#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n, x, result;
    cout << "Podaj liczbę n: ";
    cin >> n;
    cout << "Podaj " << n << " liczb dodatnich: ";
    cin >> result;
    for (int i = 1; i < n; i++) {
        cin >> x;
        result = gcd(result, x);
    }
    cout << "Największy wspólny dzielnik: " << result << endl;
    return 0;
}