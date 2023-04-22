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
    int ile = 1;
    for (size_t i = 0; i < tekst.size(); i++){
        
        if (isspace(tekst[i])){
            ile++;
            
            
        }
        
    }
    

    
    cout<<ile;
    return 0;
}