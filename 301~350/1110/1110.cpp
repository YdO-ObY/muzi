#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T, num1, num2, res_d = 0, res_r = 0;
    int d = 0, r = 0;

    for (int i = 0; i < T; i++)
    {
        cin >> num1;
        if (i == 0)
            num2 = num1;
        else
        {
            res_d = num2 - num1;
            res_r = num2 / num1;

            if(d != 0)
            {
                 d = res_d;
                 r = res_r;
            }
            else
            {
                if()
            }

        }
    }
}

