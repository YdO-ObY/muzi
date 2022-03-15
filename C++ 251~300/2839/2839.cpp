#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

int main()
{
    int N, min = INT_MAX;
    cin >> N;
    // 3의 개수
    for (int i = 0; true; i++)
    {
        int chk = 0;

        chk = 3 * i;
        if (chk == N)
        {
            if (min > i)

                min = i;
        }

        if (chk > N)
            break;

        for (int j = 0; true; j++)
        {
            chk = 0;
            chk = 3 * i + 5 * j;
            if (chk == N)
            {
                if (min > j + i)
                    min = j + i;
            }
            else if (chk > N)
                break;
        }
    }

    if (min == INT_MAX)
        cout << -1 << '\n';
    else
        cout << min << '\n';
}