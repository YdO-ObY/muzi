#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, M, start, end, num;
    vector<int> vec;

    cin >> N >> M;
    vec.resize(N);

    while (M--)
    {
        cin >> start >> end >> num;
        start--;
        for (int i = start; i < end; i++)
        {
            vec[i] = num;
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}