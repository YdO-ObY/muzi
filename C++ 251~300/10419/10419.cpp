#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int T;
    int arr[100] = {0};
    cin >> T;

    while (T--)
    {
        int d, s =0;
        cin >> d;

        //지각한시간
        s = sqrt(d);
        //수업 감소시간
        int s2 = pow(s,2);
        
        if(s + s2 <= d)
            cout << s <<'\n';
        else
            cout << s-1 <<'\n';

    }

}