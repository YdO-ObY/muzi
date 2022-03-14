#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, M, n, res = 0;
    vector<int> vec;
    cin >> N >> M;

    while (N--)
    {
        cin >> n;
        vec.push_back(n);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            int total = vec[i] + vec[j];
            if (total == M)
                res++;
        }
    }

    cout << res << '\n';
}