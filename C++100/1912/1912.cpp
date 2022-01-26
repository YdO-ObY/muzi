#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n = 0 , start, end, sum = 0;
    array<int ,1000> arr;
    
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(n == arr.size())
                break;
            // cout << n <<"번쨰 들어갈 숫자 : " << i << endl;
            arr[n] = i;
            n++;
        }
    }

    cin >> start >> end;

    for (int k = start-1; k < end; k++)
    {
        sum += arr[k];   
    }
    
    cout << sum;
}