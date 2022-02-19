#include <iostream>

using namespace std;

int main()
{
    char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    int T, a, b;
    string s;
    cin >> T;

    while (T--)
    {
        cin >> a >> b >> s;

        for (int i = 0; i < s.size(); i++)
        {
            int idx = (a*(s[i]-65) + b)%26;        
            s[i] = abc[idx];
        }
        
        cout  << s << '\n';
    }
    
}