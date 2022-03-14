#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3, s4, total = 0;

    cin >> s1 >> s2 >> s3 >> s4;

    total = s1 + s2 + s3 + s4;

    cout << total/60 << '\n' << total%60;

}