#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m = n-i;
        for (int i = 0; i < m; i++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2*(i-1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}
