#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;

    while (true)
    {
        int checksum = 0;
        getline(cin, s);
        if (s == "#")
            break;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                checksum += (i + 1) * (s[i] - 'A' + 1);
        }
        cout << checksum << '\n';
    }
}