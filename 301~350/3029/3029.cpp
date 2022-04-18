#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    int time_24 = 24 * 60 * 60;

    int start_time = 0;
    int end_time = 0;
    int res_time = 0;

    for (int i = 0, j = 0; i < 8; i += 3, j++)
    {
        string str1 = "";
        str1 += s1[i];
        str1 += s1[i + 1];

        string str2 = "";
        str2 += s2[i];
        str2 += s2[i + 1];

        if (j == 0)
        {
            start_time += stoi(str1) * 3600;
            end_time += stoi(str2) * 3600;
        }
        else if (j == 1)
        {
            start_time += stoi(str1) * 60;
            end_time += stoi(str2) * 60;
        }
        else
        {
            start_time += stoi(str1);
            end_time += stoi(str2);
        }
    }

    if (start_time > end_time)
    {
        res_time = time_24 - start_time + end_time;
    }
    else
        res_time = end_time - start_time;

    int hh = res_time / 3600;
    int mm = res_time % 3600 / 60;
    int ss = res_time % 3600 % 60;

    if (hh == 0 && mm == 0 && ss == 0)
        hh = 24;

    if (hh < 10)
        cout << "0";

    cout << hh << ":";

    if (mm < 10)
        cout << "0";
    cout << mm << ":";
    if (ss < 10)
        cout << "0";
    cout << ss << '\n';
}
