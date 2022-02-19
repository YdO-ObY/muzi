#include <iostream>

using namespace std;

int main()
{
    string s[7] = {"Thursday", "Friday", "Saturday", "Sunday","Monday", "Tuesday", "Wednesday"};

    int d, M, idx = 0, total_d = 0;

    cin >> d >> M;    

    for (int i = 1; i <= 12; i++)
    {
        if(M == i || i == 12)
        {
            total_d += d-1;
            break;
        }
        else
        {
            if(i == 1 || i == 3  || i == 5  || i == 7  || i == 8  || i == 10)
                total_d += 31;
            else if(i == 2)
                total_d += 28;
            else
                total_d += 30;
        }

    }
    
    idx = total_d % 7;

    cout << s[idx] << '\n';
}