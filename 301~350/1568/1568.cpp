#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = N;
    int i = 1;
    int cnt = 0;
    while (n > 0)
    {
        if (i > n)
            i = 1;

        n -= i;

        i++;
        cnt++;
    }

    cout << cnt << '\n';
}