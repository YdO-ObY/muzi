#include <iostream>
#include <string>

using namespace std;


int fun(int n, int r)
{
    if(r == 1)
        return n;
    else if(n == r || r == 0)
        return 1;
    
    return fun(n-1, r-1) + fun(n-1, r);
}

int main()
{
    int N, K;
    cin >> N >> K;

    int sum  = 0;
    sum += fun(N, K);
    cout << sum ;
}