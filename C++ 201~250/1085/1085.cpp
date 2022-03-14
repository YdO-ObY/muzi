#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x, y, w, h, resx = 0, resy = 0;

    cin >> x >> y >> w >> h;

    if(x > w-x)
        resx = w-x;
    else
        resx = x;
    if(y > h-y)
        resy = h-y;
    else
        resy = y;

    cout << min(resx, resy);
    
}