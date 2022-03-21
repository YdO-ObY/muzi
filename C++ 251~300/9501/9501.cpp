#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T; //테스트케이스 개수
    int N; //우주선 개수
    int D; //행성 간 거리
    int v; //최고속도
    int f; //연료양
    int c; //연료소비율
    //연료 소비율 = 시간당 연료 소비량

    cin >>T;

    while (T--)
    {
        cin >> N >> D;
        int count = 0;

        while (N--)
        {
            cin >> v >> f >> c;

            if (D <= v * f / c)
                count++;
        }

        cout << count << '\n';
    }
}