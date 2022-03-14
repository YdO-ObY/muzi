#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, N, K, n, kid;

    cin >> T;

    while (T--)
    {
        kid = 0;
        cin >> N >> K;

        while (N--)
        {
            cin >> n;
            kid += n / K;
        }

        cout << kid << '\n';
    }
}