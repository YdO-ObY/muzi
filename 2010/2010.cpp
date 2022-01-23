#include <iostream>

using namespace std;

int main()
{
    int n,p, sum=0;

    cin >> n;

    while (n--)
    {
        cin >> p;
        if(sum == 0)
            sum += p;
        else
            sum += p-1;
    }
    
    cout << sum;
}