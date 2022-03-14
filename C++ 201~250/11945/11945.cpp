#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    string s;
    vector<string> vec;

    cin >> N >> M;

    while (N--)
    {
        cin >> s;
        vec.push_back(s);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        reverse(vec[i].begin(), vec[i].end());
        cout << vec[i] << '\n';
    }
    
}