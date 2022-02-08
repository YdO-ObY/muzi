#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int ch[26] ={0}, idx = 0;


    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if('a' <= s[i] && s[i] <='z')
        {
            ch[s[i]-97]++;
        }
        else
        {
            ch[s[i]-65]++;
        }
    }

    int max = 0;
    for (int j = 0; j < 26; j++)
    {
        if(ch[j] > max){
            max = ch[j];
            idx = j;
        }
        else if(ch[j] == max){
            idx = -1;
        }
    }
    if(idx == -1)
        cout << "?" << '\n';
    else
    {
        cout << (char)(idx+65) << '\n';
    }
}