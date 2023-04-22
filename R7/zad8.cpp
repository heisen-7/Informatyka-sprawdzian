#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    int nwd = gcd(a,b);
    return (a*b)/nwd;
}


int main(){
    int n,m;
    cout<<"Podaj liczbe bombek w malym pudelku: "; cin>>n;
    cout<<"Podaj liczbe bombek w duzym pudelku: "; cin>>m;
    int nww = lcm(n,m);
    cout<<"Potrzeba "<<nww/n<<" malych pudelek."<<endl;
    cout<<"Potrzeba "<<nww/m<<" duzych pudelek.";
}