#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s2 = "";
    while (true)
    {
        string s;
        getline(cin, s);
        if(s =="")
            break;
        cout << s << '\n';
    }
}
