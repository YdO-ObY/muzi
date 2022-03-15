#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f;
    int count = 0;
    for (int i = 1; i <= 8; i++)
    {
        cin >> f;

        if (i % 2 == 0)
        {
            for (int j = 0; j < f.size(); j++)
            {
                // 0~7 첫칸 = 0
                if (j % 2 != 0 && f[j] == 'F')
                    count++;
            }
        }

        else
        {
            for (int j = 0; j < f.size(); j++)
            {
                if (j % 2 == 0 && f[j] == 'F')
                    count++;
            }
        }
    }

    cout << count << '\n';
}