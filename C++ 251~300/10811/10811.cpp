#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, i, j;
    vector<int> vec;

    cin >> N >> M;
    for (int i = 0; i <= N; i++)
    {
        vec.push_back(i);
    }

    while (M--)
    {
        cin >> i >> j;

        reverse(vec.begin() + i, vec.end() - (N - j));
    }

    for (int i = 1; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}