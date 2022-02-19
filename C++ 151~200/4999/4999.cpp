#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, res;

    cin >> s >> res;

    if(s.size() >= res.size())
        cout << "go" << '\n';
    else
        cout << "no" << '\n';    
}