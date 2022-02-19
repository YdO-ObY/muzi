#include <iostream>

using namespace std;

int main()
{
    int M, d;

    cin >> M >> d;

    if(M == 2)
    {
        if(d == 18)
            cout << "Special";
        else if(d > 18)
            cout << "After";
        else
            cout << "Before";
    }
    else if( M > 2)
        cout << "After";
    else
        cout << "Before";
}