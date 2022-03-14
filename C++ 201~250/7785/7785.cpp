#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool fun(string s1, string s2)
{
    return s1 > s2;
}

int main()
{
    int N;
    string name, stat;
    set<string, greater<string>> staff;
    cin >> N;

    while (N--)
    {
        cin >> name >> stat;

        if (stat == "leave")
            staff.erase(name);
        else
            staff.insert(name);
    }
    
   for(auto i : staff)
   {
       cout << i << '\n';
   }
}