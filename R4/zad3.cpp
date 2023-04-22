#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tekst;
    cout << "Tekst do sprawdzenia: ";
    getline(cin, tekst);
    string wyraz = "";
    for (size_t i = 0; i < tekst.size(); i++){
        
        if (isspace(tekst[i])){
            // cout << wyraz;
            if (!wyraz.empty()){
                wyraz[0] = toupper(wyraz[0]);
                for (size_t j = 1; j < wyraz.size(); j++){
                    wyraz[j] = tolower(wyraz[j]);
                }
                cout <<wyraz<< " ";
                wyraz.clear();
            }
            
        }
        else{
            wyraz += tekst[i];
        }
    }
    
    if (!wyraz.empty()){
        wyraz[0] = toupper(wyraz[0]);
        for (size_t j = 1; j < wyraz.size(); j++){
            wyraz[j] = tolower(wyraz[j]);
        }
        cout << wyraz << "";
    }
    
    return 0;
}