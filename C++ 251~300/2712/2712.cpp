#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    double val;
    string unit;
    cout << fixed;
    cout.precision(4);

    cin >> T;
    while (T--)
    {
        cin >> val >> unit;
        if (unit == "kg")
        {
            unit = "lb";
            val *= 2.2046;
        }
        else if (unit == "lb")
        {
            unit = "kg";
            val *= 0.4536;
        }
        else if (unit == "l")
        {
            unit = "g";
            val *= 0.2642;
        }
        else if (unit == "g")
        {
            unit = "l";
            val *= 3.7854;
        }

        cout << val << " " << unit << '\n';
    }
}