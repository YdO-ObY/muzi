#include <iostream>

using namespace std;

int main()
{
    int n, s, o, q, p , total;

    cin >> n;

    while (n--)
    {
        total =0;
        //자동차 가격 , 옵션 개수
        cin >> s >> o;
        total += s;
        while (o--)
        {
            cin >> q >> p;
            total += q*p; 
        }
        cout << total << "\n";
    }
    
}