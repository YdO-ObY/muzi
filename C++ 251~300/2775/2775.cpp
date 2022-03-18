#include <iostream>
#include <string>

using namespace std;

int arr[15][15] = {0};

int main()
{
    int T;
    cin >>T;

    while (T--)
    {
        int k,n;
        cin >>k >> n;

        for (int i = 0; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(i == 0)
                {
                    arr[i][j] = j;
                }
                else
                {
                    arr[i][j] = arr[i][j-1] + arr[i-1][j];
                }
            }
        }

        cout << arr[k][n] << '\n';
    }
}

//브루트포스 방식
//전체 검사 방법밖에 생각이안남..