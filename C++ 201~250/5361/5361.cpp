#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    float parts[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
    int T, n;

    cout << fixed;
    cout.precision(2);

    cin >> T;

    while (T--)
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> n;
            total += (parts[i] * n);
        }

        cout << "$" << total << '\n';
    }
}