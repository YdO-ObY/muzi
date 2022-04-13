#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr;
    int num;

    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());

    //등차
    int d = 0;

    if (arr[2] - arr[1] ==arr[1] - arr[0])
    {
        d = arr[2] - arr[1];
        if (arr[2] + d > 100)
            cout << arr[0] - d << '\n';
        else if (arr[0] - d < -100)
            cout << arr[2] + d << '\n';
        else
            cout << arr[2] + d << '\n';
    }
    else
    {
        if (arr[2] - arr[1] >= arr[1] - arr[0])
        {
            d = arr[1] - arr[0];
            cout << arr[1] + d << '\n';
        }
        else
        {
            d = arr[2] - arr[1];
            cout << arr[0] + d << '\n';
        }
    }
}