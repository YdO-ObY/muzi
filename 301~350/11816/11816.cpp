#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, s_n="";

    cin >> s;

    if (s[0] == '0')
    {
        if (s[1] == 'x')
        {
            for (int i = 2; i < s.size(); i++)
            {
                s_n += s[i];
            }
            cout  << stoi(s_n,nullptr,16);
        }
        else
        {
            for (int i = 1; i < s.size(); i++)
            {
                s_n += s[i];
            }
            cout  <<stoi(s_n,nullptr,8);
        }
    }
    else
    {

        for (int i = 0; i < s.size(); i++)
        {
            s_n += s[i];
        }

        cout << stoi(s_n);
    }
}