#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int r=5,T,n;
    
    cin >> T;

    while (T--)
    {
        vector<int> vec;
        int total = 0;
        for (int i = 0; i < r; i++)
        {
            cin >> n;
            vec.push_back(n);
            total += n;
        }

        sort(vec.begin(), vec.end());

        if(vec[3]- vec[1] >= 4){
            cout << "KIN" << "\n";
        }
        else {
            total -= vec.back() + vec.front();
            cout << total << "\n";
        }

        
    }
    
}