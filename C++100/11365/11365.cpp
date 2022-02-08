#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    while (true)
    {
        getline(cin, s);
        vector<char> vec(s.begin(), s.end());

        if(s =="END")
            break;
        
        reverse(vec.begin(), vec.end());

        for (int j = 0; j < vec.size(); j++)
        {
            cout << vec[j];
        }
        cout << '\n';
    }
    
}