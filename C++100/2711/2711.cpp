#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T, N;
    string s;

    cin >> T;
    
    while (T--)
    {
        cin >> N;
        cin >> s;
        
        for (int i = 0; i < s.size()-1; i++)
        {
            if(i >= N-1)
                s[i] = s[i+1];
            
            cout << s[i] ;
        }
        cout << '\n';
        
    }
    
}


// #include <iostream>
// #include <string>
// #include <array>

// using namespace std;

// int main()
// {
//     int Tc, n;
//     string s;

//     cin >> Tc;

//     while (Tc--)
//     {
//         cin >> n >> s;
//         char ch[s.length()];

//         strcpy(ch, s.c_str());

//         for (int i = n-1; i < s.length(); i++)
//         {
//            ch[i] = ch[i+1];
//         }

//         for (int j = 0; j < s.length(); j++)
//         {
//             cout << ch[j];
//         }
//         cout << "\n";
//     }
    
// }