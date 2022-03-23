#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // n개의 출 출력
    for (int i = 0; i < n; i++)
    {
        //빈칸 출력
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        //별출력
        if(i == 0)
            cout << "*" <<'\n';
        else
        {
            cout <<"*" ;
            for (int j = 0; j < 2*i-1; j++)
            {
                cout << " ";
            }
            cout <<"*" <<'\n';
            
        }
    }
}

/*
    n개의 출 출력
    줄마다 2개의 별 출력

    별사이의 공간
    2 = 1
    3 = 3
    4 = 5
    5 = 7
    6 = 9



*/