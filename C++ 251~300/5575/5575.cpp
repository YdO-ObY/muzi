#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T = 3;
    string time;
    while (T--)
    {
        int total_t[6] = {0};
        int work_t[3] = {0};
        int count = 0;
        string str = "";
        getline(cin, time);

        for (int i = 0; i < time.size(); i++)
        {
            if (time[i] != ' ')
            {
                str += time[i];
                if(i == time.size()-1)
                total_t[count] = stoi(str);
            }
            else
            {
                total_t[count] = stoi(str);
                count++;
                str = "";
            }
        }
        for (int i = 0; i < 3; i++)
        {
            work_t[i] = total_t[i + 3] - total_t[i];
            if(i == 2)
            {
                if(work_t[i] < 0)
                {
                    work_t[i-1] -=1;
                    work_t[i] += 60;
                }
                if(work_t[i-1] < 0)
                {
                    work_t[i-2] -=1;
                    work_t[i-1] += 60;
                }
            }
        }

        cout << work_t[0] << " " << work_t[1] << " " << work_t[2] << '\n';
    }
}