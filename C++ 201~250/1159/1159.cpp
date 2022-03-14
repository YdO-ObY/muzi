#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    string s, res = "";
    char abc[26] = {0};
    cin >> T;

    while (T--)
    {
        cin >> s;
        int idx = s[0] - 'a';

        abc[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (abc[i] >= 5)
            res += 'a' + i;
    }

    if (res != "")
        cout << res << '\n';
    else
        cout << "PREDAJA" << '\n';
}