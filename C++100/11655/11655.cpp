#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin ,s);

    for (int i = 0; i < s.size(); i++)
    {
        if(('a' <= s[i] && s[i] <= 'm') ||
        ('A' <= s[i] && s[i] <= 'M'))
            s[i] +=13;
        else if(('m' < s[i] && s[i] <= 'z') ||
        ('M' < s[i] && s[i] <= 'Z'))
            s[i] -= 13;
        

    }

    cout << s << '\n';
}