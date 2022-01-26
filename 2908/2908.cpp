// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, m, r1 ,r2;
//     cin >> n >> m;
//     r1 = n/100 +(n / 10) % 10 *10 + n%100 %10 *100; 
//     r2 = m/100 +(m / 10) % 10 *10 + m%100 %10 *100;
    
//     if(r1 > r2)
//         cout << r1;
//     else
//         cout << r2;
// }

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n ,m, r;
    cin >> n >> m;
    
    for (int i = 2; i >= 0; i--)
    {
        if(n[i] > m[i])
        {
            r = n; break;
        }
        else if (n[i] < m[i]){
             r = m; break;
        }
    }
    
    cout << r[2] << r[1] << r[0];
}