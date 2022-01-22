#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m = n;
    while (n>0)
    {
        for (int i = 0; i < m-n; i++)
        {
            cout << " ";
        }
        
        for (int i = 0; i < 2*(n-1)+1; i++)
        {
            cout << "*";
        }
        cout << "\n";
        n--;
    }
}
