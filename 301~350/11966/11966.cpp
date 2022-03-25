#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long N;

    cin >> N;

    while (N > 0)
    {
        if (N == 1)
        {
            cout << 1 << '\n';
            break;
        }
        else
        {
            if (N % 2 == 0)
                N /= 2;
            else
            {
                cout << 0 << '\n';
                break;
            }
        }
    }
}