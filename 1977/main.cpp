#include <iostream>
#include <cmath>

using namespace std;

int main(void){ 
    int a, b;
    int sum = 0;
    int min = 10000;

    cin >> a >> b;

    for(int i = sqrt(a) ; i <=sqrt(b); i++)
    {
        if((pow(i,2) >= a) && (pow(i,2) <= b)){
            if(min >= pow(i,2)){
                min = pow(i,2);
            }
            sum += pow(i,2);
        }

    }

    if(sum > 0){
        cout << sum << endl;
        cout << min << endl;
    }
    else {
        cout << -1 << endl;
    }
}
