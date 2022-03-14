#include <iostream>
#include <string>

using namespace std;
long long arrA[46] = {0};
long long arrB[46] = {0};

void fun(long long t)
{
    if (t > 1)
    {
        fun(t - 1);
        arrA[t] = arrA[t - 1] + arrA[t - 2];
        arrB[t] = arrB[t - 1] + arrB[t - 2];
    }
}

int main()
{
    long long t, A = 0, B = 0;
    arrA[0] = 1;
    arrB[1] = 1;
    cin >> t;

    fun(t);

    cout << arrA[t] << " " << arrB[t] << '\n';
}