#include <iostream>

using namespace std;

int main(){
    int n;
    int s;
    cin >> n;
    s = n;
    while (n>0)
    {
        int i = n;
        int j = s - n;
        while (j > 0)
        {
            cout << " ";
            j--;
        }
        
        while(i>0){
            cout << "*";
            i--;
        }
        cout << "\n";
        n--;
    }
    
}