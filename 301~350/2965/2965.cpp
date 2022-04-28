#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int A,B,C;

    cin >> A>>B>>C;

    int res = 0;
    while (true)
    {
        if(C-B == 1 && B-A ==1)
            break;

        if(C-B < B-A)
        {
            C = A+1;

            swap(B, C);
        }
        else
        {
            A = B+1;

            swap(A,B);
        }
        
        // if(A < B)
        //     A = B+1;
        // else if(A > B)
        //     B = A+1;

        res++;
    }
    

    cout << res << '\n';


}