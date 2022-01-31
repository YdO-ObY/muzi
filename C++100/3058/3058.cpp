#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T, val, n =7;

    cin >> T;

    while (T--)
    {
        vector<int> vec;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if(val % 2 == 0){
                vec.push_back(val);
                total += val;
            }
        }

        sort(vec.begin(), vec.end());

        cout << total << " " << vec.front() <<'\n'; 
        
    }
    
}