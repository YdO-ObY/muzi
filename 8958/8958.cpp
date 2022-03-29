#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int next_add = 1;
        int total = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i > 0)
            {
                if (s[i] == 'O')
                {
                    total += next_add;
                    next_add++;
                }
                else
                    next_add =1;
            }
            else
                if(s[i] == 'O')
                {
                    total += next_add;
                    next_add++;
                }   
        }

        cout << total <<'\n';
    }
}