#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T, A, B, C;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B >> C;

        int abc[3] = {A, B, C};

        sort(abc, abc + 3);

        if (abc[0] == abc[2]) //모든 변이 같은 경우
            cout << "Case #" << i << ": equilateral" << '\n';
        else if (abc[0] == abc[1] || abc[1] == abc[2]) // 두변이 같은 경우
        {
            if (abc[0] + abc[1] > abc[2])
                cout << "Case #" << i << ": isosceles" << '\n';
            else
                cout << "Case #" << i << ": invalid!" << '\n';
        }
        else
        {
            if (abc[0] + abc[1] > abc[2]) //모든변이 다르면서 두변의 합이 가장 긴 값보다 큰경우
                cout << "Case #" << i << ": scalene" << '\n';
            else
                cout << "Case #" << i << ": invalid!" << '\n';
        }
    }
}