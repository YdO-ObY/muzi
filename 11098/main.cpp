#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, p;

    cin >> n;

    while (n--)
    {
        cin >> p;
        vector<pair<int, string>> player(p);
        int i = 0, max = 0, res;
        while (p--)
        {
            cin >> player[i].first >> player[i].second;
            if (player[i].first > max)
            {
                max = player[i].first;
                res = i;
            }
            i++;
        }

        cout << player[res].second << endl;
        
    }
    

}