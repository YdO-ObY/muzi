#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void swap(int &num1 , int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int w, h, l;

    while (true)
    {
        cin >> w >> h >> l;

        if(w > l)
        {
            swap(w, l);
        }

        if(h > l)
        {
            swap(h, l);
        }
        if (w == 0 && h == 0 && l == 0)
            break;

        if (w >= 1 && h >= 1)
        {
            if (pow(w, 2) + pow(h, 2) == pow(l, 2))
                cout << "right" << '\n';
            else
                cout << "wrong" << '\n';
        }
        else
            cout << "wrong" << '\n';
    }
}