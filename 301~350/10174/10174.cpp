#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    cin.ignore();

    string n = "S";
    string n2 = "s";

    while (T--)
    {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if('A' <= s[i] && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        string ori_s = s;
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());


        if(ori_s == rev_s)
            cout << "Yes" <<'\n';
        else
            cout << "No" <<'\n';


    }
}