#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, T, wt;
    int count = 0;

    cin >> n >> T;
    while (n--)
    {
        cin >> wt;
        if(T-wt >= 0)
            count++;
        T -= wt;
    }

    cout << count << '\n';
}