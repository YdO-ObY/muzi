#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int total = 0;
    string s;

    cin >> s;

    vector<char> vec(s.begin(), s.end());

    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == 'a' || vec[i] == 'e' || vec[i] == 'i' || vec[i] == 'o' || vec[i] == 'u' )
            total++;
    }

    cout << total << '\n';
    

}