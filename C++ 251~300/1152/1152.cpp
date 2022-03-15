#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int count = 0;

    getline(cin,s);

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            if(i != 0)
                count++;
        }
        else
        {
            if(i == s.size()-1)
                count++;
        }
    }
    
    cout << count << '\n';
}