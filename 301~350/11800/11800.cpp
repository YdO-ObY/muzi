#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dice[7] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};

    int T, sang, chang;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        string res = "";

        cin >> sang >> chang;
        if (sang == chang)
        {
            switch (sang)
            {
            case 1:
                res = "Habb Yakk";
                break;
            case 2:
                res = "Dobara";
                break;
            case 3:
                res = "Dousa";
                break;
            case 4:
                res = "Dorgy";
                break;
            case 5:
                res = "Dabash";
                break;
            case 6:
                res = "Dosh";
                break;
            }
        }
        else
        {
            if (sang >= 5 && chang >= 5)
                res = "Sheesh Beesh";
            else if (sang > chang)
                res = dice[sang] + " " + dice[chang];
            else
                res = dice[chang] + " " + dice[sang];
        }

        cout << "Case " << i << ": " << res << '\n';
        res.clear();
    }
}