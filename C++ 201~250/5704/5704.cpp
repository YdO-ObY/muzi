#include <iostream>

using namespace std;

int main()
{
    string s;

    while (true)
    {
        bool res = true;
        int arr[26] = {0};
        getline(cin, s);

        if(s == "*")
            break;

        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]-'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if(arr[i] == 0)
            {
                res = false;
                break;
            }
        }

        if(res == true)
            cout << "Y" << '\n';
        else
            cout << "N" << '\n';
            
    }
    
}