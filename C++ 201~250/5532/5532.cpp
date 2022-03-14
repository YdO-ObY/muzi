#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int L, A, B, C, D;

    cin >> L >> A >> B >> C >> D;

    int d1 = (A % C) == 0 ? A / C : A / C + 1;

    int d2 = (B % D) == 0 ? B / D : B / D + 1;

    if (d1 >= d2)
        cout << L - d1;
    else
        cout << L - d2;
}