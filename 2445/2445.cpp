#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    
    for (int i = 1; i <= 2*n; i++)
    {
        if(i <= n)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            for (int k = 0; k < 2*(n-i); k++)
            {
                cout << " ";
            }
            for (int l = 0; l < i; l++)
            {
                cout << "*";
            }
            
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < 2*n-i; j++)
            {
                cout << "*";
            }
            for (int k = 0; k < 2*(i-n); k++)
            {
                cout << " ";
            }
            for (int l = 0; l < 2*n-i; l++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
    
}