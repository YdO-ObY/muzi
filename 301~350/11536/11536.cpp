#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> vec;
    vector<string> dec_vec;
    vector<string> inc_vec;

    int v_size;
    string name;

    cin >> v_size;

    while (v_size--)
    {
        cin >> name;
        vec.push_back(name);
    }

    inc_vec.assign(vec.begin(), vec.end());
    sort(inc_vec.begin(), inc_vec.end());
    dec_vec.assign(vec.begin(), vec.end());
    sort(dec_vec.rbegin(), dec_vec.rend());

    if (inc_vec == vec)
        cout << "INCREASING" << '\n';
    else if (dec_vec == vec)
        cout << "DECREASING" << '\n';
    else
        cout << "NEITHER" << '\n';
}