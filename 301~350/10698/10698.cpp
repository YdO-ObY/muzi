#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T, X, Y, Z;
    string op, eq;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int res = 0;
        cin >> X >> op >> Y >> eq >> Z;

        if (op == "+")
            res = X + Y;
        else
            res = X - Y;

        if (res != Z)
            cout << "Case " << i << ": NO" << '\n';
        else
            cout << "Case " << i << ": YES" << '\n';
    }
}