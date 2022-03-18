#include <iostream>
#include <string>

using namespace std;

int main()
{
    int gan[6] = {1, 2, 3, 3, 4, 10};
    int sou[7] = {1, 2, 2, 2, 3, 5, 10};

    int T, n;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int gandelf = 0;
        int souron = 0;
        for (int j = 0; j < 6; j++)
        {
            cin >> n;
            gandelf += gan[j] * n;
        }

        for (int j = 0; j < 7; j++)
        {
            cin >> n;
            souron += sou[j] * n;
        }

        if (gandelf > souron)
            cout << "Battle " << i << ": Good triumphs over Evil" << '\n';
        else if (gandelf < souron)
            cout << "Battle " << i << ": Evil eradicates all trace of Good" << '\n';
        else
            cout << "Battle " << i << ": No victor on this battle field" << '\n';
    }
}