#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C, D, total = 0;

    cin >> A >> B >> C >> D;

    if(A+D > B+C)
        total = B+C;
    else
        total =A+D;

    cout << total;
}