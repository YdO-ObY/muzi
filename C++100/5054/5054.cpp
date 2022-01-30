#include <iostream>
#include <algorithm>

using namespace std;
// bool compare(int a, int b){
//     return a < b;
// }

int main()
{
    int T, n , s;

    cin >> T;

    while (T--)
    {
        int p = 0, a = 0, l = 0;
        cin >> n;
        a = n;
        int arr[a];
        
        while (n--)
        {
            cin >> s;
            arr[n] = s;
            p += s;
        }

        //주차 좌표
        p = p/a;

        sort(arr, arr+a);

        if(arr[0] < p)
            l +=  (p - arr[0])*2;
        if(arr[a-1] > p)
            l += (arr[a-1] - p)*2;

        cout << l << endl;
    }
    
}