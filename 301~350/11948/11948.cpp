#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> ABCD;
    vector<int> EF;

    int T = 6;
    int grade;
    int total = 0;

    while (T--)
    {
        cin >> grade;
        if (T >= 2)
            ABCD.push_back(grade);
        else
            EF.push_back(grade);
    }

    sort(ABCD.begin(), ABCD.end());
    sort(EF.begin(), EF.end());

    for (int i = 1; i < ABCD.size(); i++)
    {
        if (i == 1)
            total += EF[i];

        total += ABCD[i];
    }

    cout << total << '\n';
}