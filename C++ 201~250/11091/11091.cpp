#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    string s;
    char abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin >> T;
    cin.ignore();

    while (T--)
    {
        int arr[26] ={0};
        string res = "";
        getline(cin, s);

        for (int i = 0; i < s.size(); i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
            {
                    arr[s[i] - 'A']++;
            }
            else if ('a' <= s[i] && s[i] <= 'z')
            {
                    arr[s[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
                res += abc[i];
        }

        if (res != "")
            cout << "missing " << res << '\n';
        else
            cout << "pangram" << '\n';
    }
}