#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, val, sz = 10;
    cin >> T;
    while (T--)
    {
        vector<int> vec;

        for (int i = 0; i < sz; i++)        
        {
            cin >> val;
            vec.push_back(val);
        }
        sort(vec.begin(), vec.end());
        
        cout << vec[7] << "\n";
        
        
    }
    
}