#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long N, M;

    cin >> N >> M;

    cout << fabs(N-M);
}


// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     long N, M;

//     cin >> N >> M;

//     if(N > M)
//     cout << (N - M)  << '\n';
//     else
//         cout << (N-M)*-1 << '\n';
// }