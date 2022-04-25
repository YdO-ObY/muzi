#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;

    cin >> x;

    int i = 1;

    while (x > i)
    {
        x -= i;
        i++;
    }

    if(i % 2 == 0)
        cout << x << "/" << i+1-x << '\n';
    else
        cout << i+1-x << "/" << x << '\n';
}