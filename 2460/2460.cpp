#include <iostream>

using namespace std;

int main()
{
    int n =10 ,i, o, person=0, max=0;

    while (n--)
    {
        cin >> o >> i;

        person += i - o;
        
        if(person > max){
            max = person;
        }  
    }

    cout << max << "\n";

}