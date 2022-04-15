#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int N;
    int cnt = 0;

    cin >> N;

    for (int i = 1; i <= N; i*=10)
    {
        cnt += N-i +1;
    }
    cout << cnt;

}
