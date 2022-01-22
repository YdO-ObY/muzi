#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    while (n>0)
    {
        int i =n;
        while(i>0){
            cout << "*";
            i--;
        }
        cout << "\n";
        n--;
    }
    
}