#include <iostream>

using namespace std;

int main()
{
    int T , num, cnt = 0;
    int arr[101] = {0};

    cin >> T;

    while (T--)
    {
        cin >> num;
        if(arr[num] == 0)
            arr[num]++;
        else
            cnt++;   
    }

    cout << cnt << '\n';
    
}