#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;
    vector<char> vec(s.begin(), s.end());

    for (int i = 0; i < vec.size(); i++)
    {
        if(i != 0 && i%10 == 0)
            cout << '\n';
        
        cout << vec[i];
    }
    
}