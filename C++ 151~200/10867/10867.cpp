#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> vector, int value)
{
    for (int i = 0; i < vector.size(); i++)
    {
        if(vector[i] == value)
            return false;
    }
    return true;
}

int main()
{
    int T, n;
    vector<int> vec = {};

    cin >> T;

    while (T--)
    {   
        cin >> n;
        if(check(vec, n))
            vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
}