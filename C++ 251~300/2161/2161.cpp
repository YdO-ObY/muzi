// #include <iostream>
// #include <string>
// #include <queue>

// using namespace std;

// int main()
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

//     cin >> N;

//     for (int i = 1; i <= N; i++)
//     {
//         q1.push(i);
//     }

//     while (q1.size() != 1)
//     {
//         //맨 첫 카드 버리기 == 두 번째 큐에 쌓기
//         q2.push(q1.front());
//         q1.pop();

//         //두번째 카드 맨뒤로옮긴다.
//         q1.push(q1.front());
//         q1.pop();
//     }

//     // 버린 카드 출력 == 두번째 큐 모두 출력
//     while (!q2.empty())
//     {
//         cout << q2.front() << " ";
//         q2.pop();

//         //두번째 큐 몯 출력후 첫번쨰 큐 출력
//         if (q2.empty())
//         {
//             cout << q1.front();
//             q1.pop();
//         }
//     }
// }

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int N;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    while (true)
    {
        int rm_num = q.front();
        q.pop();

        cout << rm_num << " ";

        if(q.empty())
            break;

        q.push(q.front());
        q.pop(); 
    }
}