#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, M, A, B;
    vector<int> vec;
    cin >> N >> M;
    vec.resize(N + 1);

    while (M--)
    {
        if (N == 1)
        {
            break;
        }
        cin >> A >> B;
        vec[A]++;
        vec[B]++;
    }

    for (int i = 1; i < vec.size(); i++)
    {
        cout << vec[i] << '\n';
    }
}