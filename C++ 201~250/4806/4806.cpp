#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int cnt = 0;

    for (int i = 0; getline(cin, s); i++)
    {
        cnt++;
    }

    cout << cnt << '\n';
}