#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    string n1, n2 = "", s_sum1 = "", s_sum2 = "";

    cin >> N;

    while (N--)
    {
        cin >> n1;
        int sum = 0;
        sum += stoi(n1);
        reverse(n1.begin(), n1.end());
        sum += stoi(n1);

        s_sum1 = to_string(sum);
        s_sum2 = to_string(sum);

        reverse(s_sum1.begin(), s_sum1.end());

        if (s_sum1 == s_sum2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}