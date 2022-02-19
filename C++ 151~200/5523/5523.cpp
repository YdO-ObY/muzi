#include <iostream>

using namespace std;

int main()
{
    int N, A, B, aw = 0, bw = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A >> B;
        if(A > B)
            aw++;
        else if(B > A)
            bw++;
    }

    cout << aw << " " <<  bw ;
    
}