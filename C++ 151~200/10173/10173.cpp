#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    while (true)
    {
        string s;
        string compare_str ="nemo";


        getline(cin ,s);

        if(s == "EOI")
            break;
        if(s.size() >= 4)
        {
            for (int i = 0; i < s.size()-3; i++)
            {
                
            string find_str = s.substr(i,4);
        
            if(strcasecmp(find_str.c_str(), compare_str.c_str()) == 0)
            {
                cout << "Found" << '\n';
                break;
            }
            else if(i == s.size()-4)
                cout << "Missing" << '\n';
            }
        }
        else
            cout << "Missing" << '\n';
    }
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s;
//     while (true)
//     {
//         string s;
//         getline(cin, s, '\n');
//         if(s == "EOI")
//             break;
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         if(s.find("nemo") != 1)
//             cout << "Found" << '\n';
//         else
//             cout << "Missing" << '\n';
//     }
    
// }