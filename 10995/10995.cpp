#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;

    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout <<" *";
            }
            
        } 
        cout<< "\n";
    }
    
}