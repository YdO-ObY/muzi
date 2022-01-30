#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T , n, size;

    cin >> T;
    
    vector<int> vec;

    while (T--)
    {
        cin >> n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\n";
    }
    
    
}