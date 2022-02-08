#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    string s;
    int a;
    cin >> T;

    while (T--)
    {
        cin >> s;
        cout << s.front() << s.back() << '\n';
    }
}