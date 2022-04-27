#include <iostream>
#include <string>

using namespace std;

int main()
{
    int idx = 1;

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            if (idx == 1)
                idx = 2;
            else if (idx == 2)
                idx = 1;
        }
        else if (s[i] == 'B')
        {
            if (idx == 2)
                idx = 3;
            else if (idx == 3)
                idx = 2;
        }
        else
        {
            if (idx == 1)
                idx = 3;
            else if (idx == 3)
                idx = 1;
        }
    }

    cout << idx << '\n';
}