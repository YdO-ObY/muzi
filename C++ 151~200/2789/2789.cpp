#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char ch[9] ={'C','A','M','B','R','I','D','G','E'};
    string s;
    
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(s[i] == ch[j])
                s[i] = ' ';
        }
    }

    //문자열의 특정문자 제거
    s.erase(remove(s.begin(), s.end(),  ' '), s.end());
    cout << s;
    
}