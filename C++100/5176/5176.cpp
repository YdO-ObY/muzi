#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    int K, P, M, ch;
    cin >> K;

    while (K--)
    {
        cin >> P >> M;
        int arr[M];
        fill_n(arr, M, 0);
        int non = 0;

        while (P--)
        {
            cin >> ch;

            if(arr[ch-1] == 0) {
                arr[ch-1] = 1;
            }
            else {
                non++;
            }
        }

        cout << non << '\n';
    }
}