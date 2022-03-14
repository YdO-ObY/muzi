#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    while (true)
    {
        cin >> s;
        int arr[2] = {0};
        if(s == "#")
            break;
        
        for (int i = 0; i < s.size(); i++)
        {
            if(i == s.size()-1)
            {
                if(s[i] == 'e')
                {
                    if(arr[1] % 2 == 0)
                        s[i] = '0';
                    else
                        s[i] ='1';
                }
                else
                {
                    if(arr[1] % 2 == 0)
                        s[i] = '1';
                    else
                        s[i] ='0';
                }
                break;
            }
            if(s[i] == '1')
                arr[1]++;
            else if(s[i] == '0')
                arr[0]++;
        }

        cout << s << '\n';

    }
}