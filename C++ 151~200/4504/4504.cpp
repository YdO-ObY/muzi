#include <iostream>

using namespace std;

int main()
{
    int std, num;
    cin >> std;
    while (true)
    {
        cin >> num;

        if( num == 0)
            break;
        else if(num % std == 0)
            cout << num << " is a multiple of " << std << "." <<'\n';
        else
            cout << num << " is NOT a multiple of " << std << "." << '\n';
    }
}