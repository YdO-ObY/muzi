#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, stat;
    string n;
    vector<string> vec;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        vec.push_back(n);   
    }

    cin >> stat;
    if(stat == 1)
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << '\n';
        }
    else if(stat == 3)
    {
        reverse(vec.begin(), vec.end());

        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << '\n';
        }
        
    }
    else
    {
        for (int i = 0; i < vec.size(); i++)
        {
            reverse(vec[i].begin(), vec[i].end());
            cout << vec[i] << '\n';
        }
        
    }
        
   
   return 0;
    
}