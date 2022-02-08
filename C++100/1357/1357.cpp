#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2, rev;
    int n1, n2, res;

    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    n1 = stoi(s1);
    n2 = stoi(s2);

    res = n1 + n2;

    rev = to_string(res);

    reverse(rev.begin(), rev.end());

    cout << stoi(rev) << "\n";
}


/*
111
100


111
001

112

211


*/