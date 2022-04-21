#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

double A[7] = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
double B[7] = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
double C[7] = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};
int D[7] = {1, 2, 2, 1, 2, 2, 1};

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        double record;
        int res = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> record;
            if (D[i] == 1)
            {
                res += floor(A[i] * pow((B[i] - record), C[i]));
            }
            else
            {
                res += floor(A[i] * pow((record - B[i]), C[i]));
            }
         
        }

        cout << res << '\n';
    }
}
