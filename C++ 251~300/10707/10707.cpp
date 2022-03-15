#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B, C, D, P;

    cin >> A >> B >> C >> D >> P;

    int X = A*P, Y = 0;

    if(C > P)
        Y = B;
    else
        Y = B + (P-C)*D;


    if(X > Y)
        cout << Y;
        else
        cout << X;
}