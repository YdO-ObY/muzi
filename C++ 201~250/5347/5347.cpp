#include <iostream>
#include <string>

using namespace std;

long GCD(int n1, int n2)
{
    if((n1 % n2) == 0)
        return n2;
    else
    {
        if(n1 % n2 < n2)
           return GCD(n2, n1%n2);
        else
           return GCD(n1%n2, n2);
    } 
}

int main()
{
    long T, n1,n2, gcd=0;

    cin >>T;

    while (T--)
    {
        cin >> n1 >> n2;
        gcd = GCD(n1,n2);
        
        cout << (n1 *n2)/gcd << '\n';
    }
    
}