#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        string res ="";
        cin >> n;
        
        cin >> s;
        
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                res += s[i];
            }
        }
        
        cout << res  << '\n';
        
    }
    
}