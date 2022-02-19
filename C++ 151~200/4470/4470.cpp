#include <iostream>

using namespace std;

int main()
{
    int T;

    string s;
    
    cin >> T;
    cin.ignore();    
    
    for (int i = 0; i < T; i++)
    {

        getline(cin , s);

        cout << i+1 <<". " << s <<'\n'; 
    }
    
}