#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int T;
    string s;

    
    cin >> T;

    while (T--)
    {
        int arr[24] = {0};
        int num = 0;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                arr[i]++;
        }
        int idx = 23;
        for (int i = 0; i < 24; i++, idx--)
        {
            if(arr[i] == 1)
                num += pow(2, idx);
        }
        

        cout << num <<'\n';
        
    }
    
}