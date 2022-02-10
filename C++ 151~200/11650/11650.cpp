#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, X, Y;

    cin >> T;

    vector<pair<int, int>> vec;

    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        vec.push_back({X,Y});
    }

    sort(vec.begin(), vec.end());


    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}