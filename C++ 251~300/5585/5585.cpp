#include <iostream>
#include <string>

using namespace std;

int main()
{
    int yen[6] = {500, 100, 50, 10, 5, 1};

    int useYen, totalYen = 1000, count = 0;

    cin >> useYen;

    totalYen -= useYen;
    for (int i = 0; i < 6; i++)
    {
        if (totalYen >= yen[i])
        {
            count += totalYen / yen[i];
            totalYen %= yen[i];
        }
    }

    cout << count;
}