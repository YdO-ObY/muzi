#include <iostream>

using namespace std;

int main()
{
    int n, s, a, r = 0;
    //학교의 수
    cin >> n;
    while (n--)
    {
        //s 학생수, a 사과수
        cin >> s >> a;
        r += a%s;
    }
    cout << r << "\n";
    return 0;

}