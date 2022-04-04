#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long N;

    cin >> N;

    if (N % 2 == 0)
        cout << "CY" << '\n';
    else
        cout << "SK" << '\n';
}

/*
    N  = 1
    1  = SK

    N = 2
    1 1 CY

    N = 3
    3 = SK

    N = 4
    3 1 CY
    1 1 1 1 CY

    N = 5
    3 1 1 = SK

    N = 6


*/