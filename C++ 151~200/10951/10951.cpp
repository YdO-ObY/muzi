#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string s;
        int total;
        getline(cin, s);
        if(s == "")
            break;
        total = s[0] + s[2] - 96;

        cout << total <<'\n';
    }
}