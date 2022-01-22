#include <iostream>

using namespace std;

int main()
{
    int total, val;
    int n = 1;
    cin >> total;

    while(n<10){
        cin >> val;
        total -= val;
        n++;
    }

    cout << total;
}