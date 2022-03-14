#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    float f, af=0;

    cout << fixed;
    cout.precision(2);
    for (int i = 0; true; i++)    
    {
        cin >> f;
        if(f == 999)
            break;
        if(i == 0)
            af = f;
        else
        {
            cout << f - af << '\n';
            af = f;
        }
            
    }
}