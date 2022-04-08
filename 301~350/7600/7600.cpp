#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    while (true)
    {
        int abc[26] = {0};
        getline(cin, s);

        if(s =="#")
            break;

        for (int i = 0; i < s.size(); i++)
        {
            if('a' <= s[i] && s[i] <='z')
                abc[s[i]-'a']++;
            else if('A'<=s[i] && s[i] <='Z')
                abc[s[i]-'A']++;
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if(abc[i] != 0)
                count++;
        }
        
        cout << count << '\n';
        
    }
    
}