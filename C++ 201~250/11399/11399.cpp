#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> vec, int idx)
{
    int sum = 0;
    for (int  i = 0; i <= idx; i++)
    {
        sum += vec[i];
    }

    return sum;
    
}

int main(){
    int T, n, total = 0;
    vector<int> vec;

    cin >>T;
    while (T--)
    {
        cin >> n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        total += sum(vec, i);
    }

    cout << total <<'\n';
}