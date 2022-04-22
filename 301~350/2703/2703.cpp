#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while (T--)
    {
        cin.ignore();
        string s, abc;
        char alphabet[26];

        getline(cin, s);
        cin >> abc;

        for (int i = 0; i < 26; i++)
        {
            alphabet[i] = abc[i];
        }

        for (int i = 0; i < s.size(); i++)
        {
            int idx = s[i] -65;
            
            if (0 <= idx && idx <= 25)
            {
                s[i] = alphabet[idx];
                cout << s[i];
            }
            else
            {
                cout << s[i];
            }
        }

        cout << '\n';
    }
}