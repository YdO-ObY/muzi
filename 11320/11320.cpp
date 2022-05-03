#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    int res = 0, count = 0;
    cin >> A >> B >> V;

    //V-B 마지막 전날의 위치
    //A-B 하루에 올라갈수있는 증가량

    count += (V-B) / (A-B);

    //둘의 나머지가 0보다 크면 하루 더 올라가야함
    if((V-B) % (A-B) > 0)
        count++;

    cout << count << '\n';
}