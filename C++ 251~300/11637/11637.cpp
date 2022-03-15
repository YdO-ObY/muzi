#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T, n, p;

    cin >> T;

    while (T--)
    {
        vector<int> vec;
        cin >> n;
        vec.resize(n + 1);
        int total = 0, max = 0, idx = 0;
        bool check = true;

        for (int i = 1; i <= n; i++)
        {
            cin >> p;
            vec[i] = p;
            if (p > max)
            {
                max = p;
                idx = i;
                check = true;
            }
            else if (p == max)
                check = false;
            total += p;
        }

        if (check == true)
        {
            if (max > (total / 2))
                cout << "majority winner " << idx << '\n';
            else
                cout << "minority winner " << idx << '\n';
        }
        else
            cout << "no winner" << '\n';
    }
}