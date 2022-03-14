#include <iostream>

using namespace std;

int main()
{
    int T;
    double n;
    cin >> T;

    cout << fixed;
    cout.precision(2);
    while (T--)
    {
        cin >> n;
        n *= 0.8;
        cout << "$" << n << '\n';
    }
}