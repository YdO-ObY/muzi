// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     string s;

//     cin >> s;

//     vector<char> vec(s.begin(), s.end());
//     int ch[26] ={};

//     for (int i = 0; i < vec.size(); i++)
//     {
//         if(vec[i] == 'a')
//             ch[0] += 1;
//         if(vec[i] == 'b')
//             ch[1] += 1;
//         if(vec[i] == 'c')
//             ch[2] += 1;
//         if(vec[i] == 'd')
//             ch[3] += 1;
//         if(vec[i] == 'e')
//             ch[4] += 1;
//         if(vec[i] == 'f')
//             ch[5] += 1;
//         if(vec[i] == 'g')
//             ch[6] += 1;
//         if(vec[i] == 'h')    
//             ch[7] += 1;
//         if(vec[i] == 'i')
//             ch[8] += 1;
//         if(vec[i] == 'j')
//             ch[9] += 1;
//         if(vec[i] == 'k')
//             ch[10] += 1;
//         if(vec[i] == 'l')
//             ch[11] += 1;
//         if(vec[i] == 'm')
//             ch[12] += 1;
//         if(vec[i] == 'n')
//             ch[13] += 1;
//         if(vec[i] == 'o')
//             ch[14] += 1;
//         if(vec[i] == 'p')
//             ch[15] += 1;
//         if(vec[i] == 'q')
//             ch[16] += 1;
//         if(vec[i] == 'r')
//             ch[17] += 1;
//         if(vec[i] == 's')
//             ch[18] += 1;
//         if(vec[i] == 't')
//             ch[19] += 1;
//         if(vec[i] == 'u')
//             ch[20] += 1;
//         if(vec[i] == 'v')
//             ch[21] += 1;            
//         if(vec[i] == 'w')
//             ch[22] += 1;
//         if(vec[i] == 'x')
//             ch[23] += 1;
//         if(vec[i] == 'y')
//             ch[24] += 1;
//         if(vec[i] == 'z')
//             ch[25] += 1;
//     }

//     for (int j = 0; j < 26; j++)
//     {
//         cout << ch[j] << " ";
//     }

// }


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ch[26] = {0};

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        ch[s[i] - 97]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        cout << ch[i] << " ";
    }
    

}