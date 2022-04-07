#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    while (true)
    {
        cin >> T;

        if (T == 0)
            break;

        int pre_num = 0;
        int in_num;
        while (T--)
        {
            cin >> in_num;
            if (pre_num == 0)
            {
                pre_num = in_num;
                cout << in_num << ' ';
            }
            else
            {
                if (pre_num != in_num)
                {
                    cout << in_num << ' ';
                    pre_num = in_num;
                }
            }
        }

        cout << '$' << '\n';
    }
}