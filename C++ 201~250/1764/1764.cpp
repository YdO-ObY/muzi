#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> dp;
    set<string> bp;
    set<string> dbp;
    int N, M;
    string d, b;
    cin >> N >> M;

    while (N--)
    {
        cin >> d;
        dp.insert(d);
    }

    while (M--)
    {
        cin >> b;
        if(dp.count(b))
            dbp.insert(b);
    }

    cout << dbp.size() << '\n';
    for (auto p : dbp)
        cout << p << '\n';
}