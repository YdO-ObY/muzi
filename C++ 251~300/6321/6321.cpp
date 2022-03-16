#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'Z')
                s[j] = 'A';
            else
                s[j] = s[j] + 1;
        }

        cout << "String #"<<i <<'\n'<< s<<'\n'<<'\n';
    }
}