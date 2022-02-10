#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;
    vector<string> vec;

    //substr(start, end) 문자열 자르기
    for (int i = 0; i < S.size(); i++)
    {
        vec.push_back(S.substr(i, S.size()));
    }
    
    sort(vec.begin(), vec.end());

    for (int j = 0; j < vec.size(); j++)
    {
        cout << vec[j] << '\n';
    }
    
}