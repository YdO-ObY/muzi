#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string n1, n2, res = "";

    cin >> n1 >> n2;

    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    for (int i = 7; i > 0; i--)
    {
        int sum = 0;
        if (n1.size() >= i)
            sum += (n1[i - 1] - '0');
        if (n2.size() >= i)
            sum += (n2[i - 1] - '0');
        
    
            res += to_string(sum);
    }
    cout << stol(res);
}