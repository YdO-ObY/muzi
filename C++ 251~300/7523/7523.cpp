#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    long long s, e;

    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        long long res = 0;
        cin >> s >> e;
        if (s >= 0)
        {
            res = (s + e) * (e - s + 1) / 2;
        }
        else
        {
            long long first = 0;
            long long second = 0;

            first = (s) * (s - 1) / 2;

            second = (e) * (e + 1) / 2;
            res = second - first;
        }

        cout << "Scenario #" << i << ":" << '\n'
             << res << '\n'
             << '\n';
    }
}
// 1~10
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

// 1 2 3 4 5
// 6 6 3 = 15
// 1 2 3 4
// 5 5  = 10
// (n+m)*(m-n+1) /2

// 1~  100
/*
    -1 -2 -3 -4 -5 -6
    -7 -7 -7
    -7 * 3
*/
