#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    cin >>N;
    
    for (int i = 1; i <= N; i++)
    {
        int res = 0;
        for (int j = 1; j <= 10; j++)
        {   
            int num;
            cin >> num;
            
            if((j-1) %5 +1 == num)
                res++;
        }

        if(res == 10)
            cout << i << '\n';
        
    }
    

}