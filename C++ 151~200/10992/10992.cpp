#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if(i == 1)
        {
            for (int j = 1; j < N; j++)
            {
                cout << " ";
            }
            cout << "*" << '\n';
        }
        else if(i != 1 && i == N)
        {
            for (int l = 1; l <= 2*N-1; l++)
            {
                cout << "*";
            }
            
        }
        else
        {
            for (int k = 1; k <= N-i; k++)
            {
                cout << " ";
            }

            cout << "*";

            for (int k = 1; k < 2*(i-1); k++)
            {
                cout << " ";
            }
            
            cout << "*";
            
            
            cout << '\n';
        }
    }

    cout <<'\n';
}