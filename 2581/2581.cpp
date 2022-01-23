#include <iostream>

using namespace std;
bool prime(int n)
{
    if(n<2)
        return false;
    for (int i = 2; i < n; i++)
    {
        if(n%i ==0)
            return false;
    }
    return true;
    
}

int main()
{
    int min, Max, sum=0, p_min=0;

    cin >> min >> Max;

    for (int i = min; i <= Max; i++)
    {
        if(prime(i) == true)
        {
            if(p_min == 0)
                p_min = i;

            sum+= i;    
        }
    }
    if(p_min != 0)
        cout << sum <<"\n" << p_min;
    else
        cout <<-1;
}