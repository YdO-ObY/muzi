#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;

    int len;
    while (true)
    {
        int T = 3;
        vec.resize(0);

        while (T--)
        {
            cin >> len;
            vec.push_back(len);
        }

        sort(vec.begin(), vec.end());

        if (vec[0] == 0 && vec[2] == 0)
            return 0;

        if (vec[0] + vec[1] <= vec[2])
            cout << "Invalid" << '\n';
        else if (vec[0] == vec[1] && vec[1] == vec[2])
            cout << "Equilateral" << '\n';
        else if (vec[0] == vec[1] || vec[1] == vec[2])
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }
}