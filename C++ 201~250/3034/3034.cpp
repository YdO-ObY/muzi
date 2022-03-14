#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int N, W, H, L;

    cin >> N >> W>> H;

    while (N--)
    {
        cin >> L;
        if(L <= W || L <= H || L <= sqrt(pow(W,2)+pow(H,2)))
            cout << "DA" <<'\n';
        else
            cout << "NE" << '\n';

    }
}