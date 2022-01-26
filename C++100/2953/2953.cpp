#include <iostream>

using namespace std;

int main()
{
    int Tc = 5, n , sum, max = 0, seq = 0;

    for (int i = 1; i <= Tc; i++)
    {
        sum =0;
        for (int j = 0; j < Tc-1; j++)
        {
            cin >> n;
            sum += n;
        }

        if(max < sum){
            max = sum;
            seq = i;
        }
    }

    cout << seq << " " << max;
}