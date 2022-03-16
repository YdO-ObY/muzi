#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    for (int i = 1; true; i++)
    {
        cin >> N;

        if (N == 0)
            break;

        cout << i << ". ";

        N *= 3;
        if (N % 2 == 0)
        {
            cout << "even ";
            N /= 2;
            N *= 3;
            N /= 9;

            cout << N << '\n';
        }
        else
        {
            cout << "odd ";
            N = (N + 1) / 2;
            N *= 3;
            N /= 9;

            cout << N <<'\n';
        }
    }
}