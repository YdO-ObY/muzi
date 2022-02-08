#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, M;
    
    cin >> N >> M;

    string s = to_string(N);
    int cnt = 1;
    if(s.size() * N <= M)
    {
        while (N--)
        {
            cout << s;
        }
        
    }
    else
    {
        while (M > 0)
        {
            if(M >= s.size()){
                M -= s.size();
                cout << s;
            }
            else {
                for (int i = 0; i < M; i++)
                    cout << s[i];
                break;
            }
            cnt++;
        }   
    }
}