#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n-1; i++)
    {
        if (i<=n)
        {
            for (int j = 0; j < n-i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < i-n; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2*n-i; k++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        
    }
    
}