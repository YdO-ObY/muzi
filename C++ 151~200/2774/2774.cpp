#include <iostream>

using namespace std;

int main()
{
    int T, num;
    
    cin >> T;

    while (T--)
    {
        int cnt = 0, arr[10] = {0};
        cin >> num;
        while (num > 0)
        {
            arr[num%10]++;
            num /= 10;
        }

        for (int i = 0; i < 10; i++)
        {
            if(arr[i] != 0)
                cnt++;
        }
        
        cout << cnt << "\n";
        
    }
    
}