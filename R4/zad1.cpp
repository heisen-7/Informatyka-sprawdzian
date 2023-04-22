#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tekst;
    cout << "Tekst do sprawdzenia: ";
    cin >>tekst;
    for (size_t i = 0; i < tekst.size(); i++)
    {
        if (isupper(tekst[i]))
        {
            cout<<"NIE";
            return 0;
        }
        
    }
    
    

    
    cout<<"TAK";
    return 0;
}