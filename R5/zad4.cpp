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
    int n, d=2, i=1;
    cout<<"n = "; cin>>n;
    while (d*d<=n)
    {
        
        if (n%d==0)
        {
            
            if (!CzyPierwsza(d))
            {
                cout<<"NIE";
                return 0;
            }
            i++;
            n=n/d;
        }
        else d++;
    }
    
    if (i!=2)
    {
        cout<<"NIE";
        return 0;
     }
    cout<<"TAK";
    return 0;
        
        
    
    cout<<i;
    
}