#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, B;
    vector<int> vecA;
    int equal_num = 0;

    cin >> A >> B;
    for (int i = 0; i < A; i++)
    {
        int a;
        cin >> a;
        vecA.push_back(a);
    }

    sort(vecA.begin(), vecA.end());
    for (int i = 0; i < B; i++)
    {
        int b;
        cin >> b;
        if(binary_search(vecA.begin(), vecA.end(), b))
            equal_num++;
    }

    cout << A + B - (equal_num * 2) << '\n';
}