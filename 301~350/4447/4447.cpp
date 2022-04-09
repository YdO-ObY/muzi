#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;

    cin >> T;

    cin.ignore();
    while (T--)
    {
        string s;
        int b_cnt = 0, g_cnt = 0;
        getline(cin, s);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' || s[i] == 'b')
                b_cnt++;
            else if (s[i] == 'G' || s[i] == 'g')
                g_cnt++;
        }
        if(b_cnt > g_cnt)
            cout << s << " is A BADDY" << '\n';
        else if(b_cnt < g_cnt)
            cout << s << " is GOOD" << '\n';
        else
            cout << s << " is NEUTRAL" << '\n';

    }
}