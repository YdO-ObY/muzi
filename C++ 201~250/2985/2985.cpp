#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n1, n2, n3;
    char o1, o2;

    cin >> n1 >> n2 >> n3;
    if (n1 == n2 + n3)
    {
        o1 = '=';
        o2 = '+';
    }
    if (n1 == n2 - n3)
    {
        o1 = '=';
        o2 = '-';
    }
    if (n1 == n2 * n3)
    {
        o1 = '=';
        o2 = '*';
    }
    if (n1 == n2 / n3)
    {
        o1 = '=';
        o2 = '/';
    }

    if (n1 * n2 == n3)
    {
        o1 = '*';
        o2 = '=';
    }
    if (n1 - n2 == n3)
    {
        o1 = '-';
        o2 = '=';
    }
    if (n1 + n2 == n3)
    {
        o1 = '+';
        o2 = '=';
    }
    if (n1 / n2 == n3)
    {
        o1 = '/';
        o2 = '=';
    }

    cout << n1 << o1 << n2 << o2 << n3;
}