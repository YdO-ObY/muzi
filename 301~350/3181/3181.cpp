#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    string res = "";
    vector<string> mute_string = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
    char ch = '\0';

    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            res += s[i];
            if (i == s.size() - 1)
            {
                if (find(mute_string.begin(), mute_string.end(), res) == mute_string.end())
                {

                    ch = res[0] - 32;
                    cout << ch;
                }
            }
        }
        else
        {
            if (find(mute_string.begin(), mute_string.end(), res) != mute_string.end())
            {
                if (ch == '\0')
                {
                    ch = res[0] - 32;
                    cout << ch;
                }

                res = "";
            }
            else
            {
                ch = res[0] - 32;
                cout << ch;
                res = "";
            }
        }
    }
}