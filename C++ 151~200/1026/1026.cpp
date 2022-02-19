#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, a, b, total = 0;
    vector<int> vecA;
    vector<int> vecB;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        vecA.push_back(a);
    }
    sort(vecA.begin(), vecA.end());


    for (int i = 0; i < N; i++)
    {
        cin >> b;
        vecB.push_back(b);
    }

    sort(vecB.begin(), vecB.end());
    reverse(vecB.begin(), vecB.end());

    for (int i = 0; i < N; i++)
    {
        total += vecA[i]*vecB[i];
    }
    
    cout << total << '\n';
    
}