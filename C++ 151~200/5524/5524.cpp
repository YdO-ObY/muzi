#include <iostream>

using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if('A' <= s[i] && s[i] <= 'Z')
                s[i] = s[i] - ('A' - 'a');
        }
        cout << s << '\n';
    }
    


}