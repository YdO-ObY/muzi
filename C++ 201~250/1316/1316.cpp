#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, val = 0, result = 0;
    string s;
    cin >> T;

    while (T--)
    {
        result++;
        int abc[26] = {0};
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int idx = s[i] - 'a';
            if (i == 0)
                abc[idx] += 1;
            else
            {
                if (s[i - 1] == s[i])
                    abc[idx] += 1;
                else if (abc[idx] == 0)
                    abc[idx] += 1;    
                else
                {
                    result--;
                    break;
                }
            }
        }
    }

    cout << result << '\n';
}