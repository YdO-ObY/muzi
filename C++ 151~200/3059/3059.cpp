#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        int total = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if(s[i] == abc[j])
                    abc[j] = ' ';
            }
        }

        for (int k = 0; k < 26; k++)
        {
            if(abc[k] != ' ')
                total += abc[k];
        }

        cout << total << '\n';
        
    }    
}