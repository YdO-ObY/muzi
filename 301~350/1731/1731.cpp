#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, num1;
    int num2 = 0, d1 = 0, r1 = 0, d2 = 0, r2 = 0;

    cin >> T;

    while (T--)
    {
        cin >> num1;

        if (num2 == 0)
            num2 = num1;
        else
        {
            d1 = num1 - num2;
            r1 = num1 / num2;
            num2 = num1;
        }
        if (d2 == 0)
            d2 = d1;
        if (r2 == 0)
            r2 = r1;

        if(d2 == d1 && T == 0)
            cout << num1 + d2 << '\n';
        else if(r2 == r1 && T == 0)
            cout << num1 * r2 << '\n';
    }
}