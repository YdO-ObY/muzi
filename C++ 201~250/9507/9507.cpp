#include <iostream>
#include <string>

using namespace std;

long long arr[67] = {0};
void koong(int t)
{
    if(t > 3)
    {
        koong(t-1);
        arr[t] = arr[t-1] + arr[t-2] + arr[t-3] + arr[t-4];
    }
}
int main()
{
    int t, n;
    while (t--)
    {
        
    }
    
    cin >> t;
    arr[0] = 1;
    arr[1] = 1; 
    arr[2] = 2;
    arr[3] = 4;

    while (t--)
    {
        cin >> n;

        koong(n);

        cout << arr[n] <<'\n';
    }
    
}