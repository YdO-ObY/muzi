#include <iostream>

using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        int U = 0 , T = 0;
        cin >> N >> M;
        U = M * 2 - N ;
        T = M - U;

        cout << U  << " " << T << '\n';
    }
    
}