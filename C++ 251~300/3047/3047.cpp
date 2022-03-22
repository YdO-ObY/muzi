#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int n;
    string res;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    cin >> res;

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == 'A')
            cout << vec[0] << " ";
        else if (res[i] == 'B')
            cout << vec[1] << " ";
        else if (res[i] == 'C')
            cout << vec[2] << " ";
    }
}