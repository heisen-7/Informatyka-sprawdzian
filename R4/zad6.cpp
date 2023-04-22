#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            cout<<i*1000+j*100+j*10+i<<endl;
        }
        
    }
    
}
