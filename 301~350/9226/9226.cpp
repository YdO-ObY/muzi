#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;

    while (true)
    {
        cin >> s;

        string res = "";

        if (s == "#")
            break;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
            {
                if (i == 0)
                {
                    res = s + "ay";
                    break;
                }
                else
                {
                    res = s.substr(i, s.length() - i) + res + "ay";
                    break;
                }
            }
            else
            {
                res += s[i];

                if(i == s.size()-1)
                    res += "ay";
            }
        }

        cout << res << '\n';
    }
}