#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B, C, n1, n2, total = 0;
    int arr[101] = {0};
    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++)
    {
        cin >> n1 >> n2;

        for (int i = n1; i < n2; i++)
        {
            arr[i]++;
        }
    }

    for (int i = 0; i <= 100; i++)
    {
        switch (arr[i])
        {
        case 1:
            total += A;
            continue;
        case 2:
            total += (2 * B);
            continue;
        case 3:
            total += (3 * C);
            continue;
        default:
            continue;
        }
    }
    cout << total << '\n';
}