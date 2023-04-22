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
    for (size_t i = 0; i < 100; i++)
    {
        if (CzyPierwsza(i)) cout<<i<<endl;
        
        
    }
    
    
}