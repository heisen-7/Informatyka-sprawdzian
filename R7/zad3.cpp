#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    int x,y;
    cout<<"Podaj x: "; cin>>x;
    cout<<"Podaj y: "; cin>>y;
    int pole_prost = x*y;
    int bok_kwad = gcd(x,y);
    int pole_kwad = bok_kwad * bok_kwad;
    int ile = pole_prost/pole_kwad;
    cout<<ile;
}