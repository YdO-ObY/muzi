#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int hc = 0, sc = 0;
    getline(cin, s);

    if (s.size() > 2)
    {
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == ')')
                hc++;
            else if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == '(')
                sc++;
        }
    }
    if (hc == 0 && sc == 0)
        cout << "none" << '\n';
    else if (hc > sc)
        cout << "happy" << '\n';
    else if (hc < sc)
        cout << "sad" << '\n';
    else if (hc == sc)
        cout << "unsure" << '\n';
}