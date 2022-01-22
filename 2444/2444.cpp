#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    //2*(n-1)+1 번 반복
    for (int i = 1; i <= 2*(n-1)+1; i++)
    {
        //별이 길어지는 구간
        if(i <= n){
            for (int j = 0; j < n-i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2*(i-1)+1; k++)
            {
                cout << "*";
            }
            
            cout << "\n";
        }
        //별이 짧아지는 구간
        else {
            for (int j = 0; j < i-n; j++)
            {
                cout << " ";
            }
            m = (n-i)*-1;
            for (int k = 0; k < 2*(n-m)-1; k++)
            {
                cout << "*";
            }
            cout << "\n";
            
        }
    }
}   