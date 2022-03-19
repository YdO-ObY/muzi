#include <iostream>
#include <string>

using namespace std;

int main()
{
    int P;

    string s;

    cin >> P;

    while (P--)
    {
        int arr[8] = {0};
        cin >> s;
        for (int i = 0; i < s.size() - 2; i++)
        {
            string res = s.substr(i,3);
            

            if (res == "TTT")
                arr[0]++;

            else if (res == "TTH")
                arr[1]++;

            else if (res == "THT")
                arr[2]++;

            else if (res == "THH")
                arr[3]++;

            else if (res == "HTT")
                arr[4]++;

            else if (res == "HTH")
                arr[5]++;

            else if (res == "HHT")
                arr[6]++;

            else if (res == "HHH")
                arr[7]++;
        }

        for (int i = 0; i < 8; i++)
        {
            cout << arr[i] << " ";
        }

        cout << '\n';
    }
}