#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int res = 0;
    bool prime = true;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
            res += s[i] - 96;
        else
            res += s[i] - 38;
    }
    
    for (int i = 2; i <= res / 2; i++)
    {
        //소수가 아님
        if (res % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime == false)
    {
        cout << "It is not a prime word." << '\n';
    }
    else
        cout << "It is a prime word." << '\n';
}