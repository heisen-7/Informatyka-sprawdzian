#include <cctype>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n, d=2, i=0;
    int g = 0;
    cout<<"n = "; cin>>n;
    int ostat = 0;
    while (d*d<=n)
    {
        if (n%d==0)
        {
            if (d!=ostat){
                i++;
            }
            
            n=n/d;
            if (!(d*d<=n)) ostat = d;
            
        }
        else d++;
        
    }
    if (d!=ostat){
        i++;
    }
    cout<<i;
    
}