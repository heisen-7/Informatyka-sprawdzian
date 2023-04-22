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
    int count = 0;
    int i = 0;
    while (count!=30){
        if (CzyPierwsza(i))
        {
            cout<<i<<endl;
            count++;
        }
        i++;
        
    }

}