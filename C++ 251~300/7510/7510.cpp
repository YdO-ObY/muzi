#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, a, b, c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> vec;
        cin >> a >> b >> c;

        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);

        sort(vec.begin(), vec.end());

        int leng1 = pow(vec[0], 2) + pow(vec[1], 2);
        int leng2 = pow(vec[2], 2);
        if (leng1 == leng2)
        {
            cout << "Scenario #" << i + 1 << ":" << '\n';
            cout << "yes" << '\n' << '\n';
        }

        else
        {
            cout << "Scenario #" << i + 1 << ":" << '\n';
            cout << "no" << '\n' << '\n';
        }
    }
}