#include <cctype>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n, d=2, i=1;
    cout<<"n = "; cin>>n;
    while (d*d<=n)
    {
        if (n%d==0)
        {
            i++;
            n=n/d;
        }
        else d++;
        
    }
    cout<<i;
    
}