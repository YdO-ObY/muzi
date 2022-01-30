#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, n;
    vector<int> vec;
    cin >> T;

    while (T--)
    {
        cin >> n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    cout << vec.front() * vec.back();
}