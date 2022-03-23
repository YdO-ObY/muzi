#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c;
    vector<int> vec;

    cin >> a>>b>>c;

    if(a+b+c != 180)
        cout << "Error" << '\n';
    else
    {
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);

        sort(vec.begin(), vec.end());

        if(vec[0] == 60)
            cout << "Equilateral" << '\n';
        else if(vec[0] == vec[1] || vec[1] == vec[2])
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }
}