#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;

    vector<string> vec;

    
    for (int i = 0; i < T; i++)
    {
        cin >> s;
        vec.push_back(s);
        
        if ( i > 0)
        {
            for (int j = 0; j < vec[0].size(); j++)
            {
                if(vec[0][j] != vec[i][j])
                    vec[0][j] = '?';
            }
        }
    }
    cout << vec[0] ;
}