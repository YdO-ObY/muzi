#include <iostream>

using namespace std;

int main()
{
    int L , P, n, T = 5, np[5] = {0};
    
    cin >> L >> P;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        np[i] = n - L * P;
    }

    for (int j = 0; j < 5; j++)
    {
        cout << np[j] << " ";
    }
}