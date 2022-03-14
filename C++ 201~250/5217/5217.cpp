#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, n;
    string s;
    cin >> T;
    while (T--)
    {
        string s = "";
        cin >> n;
        for (int i = 1; i <= n / 2; i++)
        {
            if (i != n - i)
            {
                if (i == 1)
                    s += to_string((int)i) + " " + to_string(n - i);
                else
                    s += (", " + to_string(i) + " " + to_string(n - i));
            }
        }

        cout << "Pairs for " << n << ": " << s << '\n';
    }
}