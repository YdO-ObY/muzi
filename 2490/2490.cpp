#include <iostream>

using namespace std;

int main()
{
    int n =3, m= 4, v ,sum;
    while (n--)
    {
        sum = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> v;
            sum += v;
        }

        switch (sum)
        {
        case 0:
            cout<<"D"<<"\n";
            break;
        case 1:
            cout<<"C"<<"\n";
            break;
        case 2:
            cout<<"B"<<"\n";
            break;
        case 3:
            cout<<"A"<<"\n";
            break;
        case 4:
            cout<<"E"<<"\n";
            break;
        }
    }
    
}