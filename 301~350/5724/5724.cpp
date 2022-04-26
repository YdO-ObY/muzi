#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        int N;
        int res = 0;
        cin >> N;

        if(N == 0)
        break;

        for (int i = 1; i <= N; N--)
        {
            res += N * N;
        }

        cout << res << '\n';
    }
}