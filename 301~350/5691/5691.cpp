#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B;
    int m = 0;
    int C = 0;

    while (true)
    {
        cin >> A >> B;

        if(A == 0 && B == 0)
            break;

        if (A >= B)
            m = B;
        else
            m = A;

        C = m * 3 - A - B;

        cout << C << '\n';
    }
}