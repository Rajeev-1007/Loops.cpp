#include<iostream>
using namespace std;
int main()
{
     char n = 'a';

    
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) 
        {
            cout << n;
        
            n++;
        }
        cout << endl;
        
    }

    return 0;
}