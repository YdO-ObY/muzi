#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, M, i, j;
    vector<int> vec;

    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        vec.push_back(i);
    }
    

    while (M--)
    {
        cin >> i >> j;
        int temp = vec[i-1];
        vec[i-1] = vec[j-1];
        vec[j-1] = temp;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}