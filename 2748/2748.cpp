#include <iostream>
#include <array>


using namespace std;

int main(){
    long n;
    long val;
    array<long, 90> arr = {0,1};
    cin >> n;

    if (n == 0)
        val = arr[0];
    
    if (n == 1)
        val = arr[1];

    if( n > 1){
        for(int i = 2; i <= n; i++){
            val = arr[i-2] + arr[i-1];
            arr[i] = val;
        }
    }

    cout << val;
    
}