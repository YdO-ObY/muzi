#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int D[s1.size()];

        cout << "Distances: " ;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] <= s2[i])
                cout << s2[i]-s1[i] << " "; 
            else
                cout << s2[i]-s1[i] + 26 << " ";
        }
        cout << "\n";
        
    }
}