#include <cctype>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool CzyPierwsza(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"liczba = "; cin>>n;
    n++;
    while (true)
    {
        if (CzyPierwsza(n))
        {
            cout<<n;
            return 0;
        }
        n++;
    }
    
    


}