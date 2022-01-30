#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int T, n;
    queue<int> q;
    cin >> T;

    while (T--)
    {
        cin >> n;

        while (n > 0)
        {
            if(n >= 2){
                q.push(n%2);
                n /=2;
            }
            else {
                q.push(n);
                break;
            }
        }
        int s = q.size();

        for (int i = 0; i < s; i++)
        {  
        if(q.front() == 1)
            cout << i << " ";   
            q.pop();
        }
        cout << "\n";
    }
}