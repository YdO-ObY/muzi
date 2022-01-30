#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T = 5 ,total = 0, v;
    vector<int> vec;

    while (T--)
    {
        cin >> v;
        vec.push_back(v);
        total += v;
    }

    sort(vec.begin(), vec.end());

    cout << total/vec.size() << "\n";
    cout << vec[2] << "\n";
}