#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool CzyPal(string co){
    for (size_t i = 0; i < co.size(); i++)
    {
        
        if (co[i] != co[co.size() - i-1])
        {
            return false;
        }
    }
    return true;
}

bool all_digits_same(int n) {
    string s = to_string(n);
    return s.find_first_not_of(s[0]) == string::npos;
}

int main()
{
    string tekst;
    cout << "Tekst do sprawdzenia: ";
    getline(cin, tekst);
    int dlugosci = 0;
    string wyraz = "";
    for (size_t i = 0; i < tekst.size(); i++)
    {
        
        if (tekst[i] == ' ')
        {
            cout<<"wyraz: "<<wyraz<<endl;
            dlugosci = dlugosci*10;
            dlugosci = dlugosci + wyraz.size();
            if (!CzyPal(wyraz))
            {
                cout<<"NIE";
                return false;
            }
            wyraz = "";
            
        }
        else
        {
            cout<<"iteracja: "<<i<<" litera: "<<tekst[i]<<endl;
            wyraz += tekst[i];
        }
        if (i == tekst.size()-1)
        {
            cout<<"wyraz: "<<wyraz<<endl;
            dlugosci = dlugosci*10;
            dlugosci = dlugosci + wyraz.size();
            if (!CzyPal(wyraz))
            {
                cout<<"NIE";
                return false;
            }
            wyraz = "";
        }
        
        
        
    }
    if (all_digits_same(dlugosci))
    {
        cout<<"TAK";
        return true;
    }  
}
