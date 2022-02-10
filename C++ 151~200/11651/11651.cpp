#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ysort(const pair<int, int> a, const pair<int, int> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second ;
}

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

    sort(vec.begin(), vec.end(), ysort);

    for (int j = 0; j < vec.size(); j++)
    {
        cout << vec[j].first << " " << vec[j].second<< '\n';
    }
    
    
    
}