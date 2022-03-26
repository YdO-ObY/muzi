#include <iostream>
#include <string>

using namespace std;

int main()
{
    float H,P;

    cout << fixed;
    cout.precision(2);

    while(true)
    {
        cin >> H >> P;
        if(cin.eof() == true)
            break;

        
        cout <<  H/P << '\n';
    }

}