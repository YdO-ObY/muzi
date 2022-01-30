#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string number;
    cin >> number;
    vector<char> vec(number.begin(), number.end());
    //오름차순 정리
    sort(vec.begin() , vec.end());
    //역순정렬
    reverse(vec.begin() , vec.end());

    //오름차순의 역순 = 내림차순
    for (int i = 0; i < number.size(); i++)
    {
        cout << vec[i];
    }
}