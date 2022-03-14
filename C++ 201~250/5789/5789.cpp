#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;

    while (T--)
    {
        cin >> s;

        int i = s.size() / 2;

        if (s[i - 1] == s[i])
            cout << "Do-it" << '\n';
        else
            cout << "Do-it-Not" << '\n';
    }
}