#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    for (int i = 0; i < 100; i++)    
    {
        if(!cin.eof())
        {
            getline(cin , s);
            cout << s << '\n';
        }
        else
            break;
    }    
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// 	string input;

// 	for(int i = 0; i < 100; i++)
// 	{
// 		getline(cin, input);  // 앤터가 나오기 전 까지 한 줄 입력 
// 		cout << input  << endl;  
// 	}

// 	return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

// 	string str[100];
    
// 	for (int i = 0; i < 100; i++)
// 		getline(cin, str[i]);
        
// 	for (int j = 0; j < 100; j++)
// 		cout << str[j] << endl;;
        
// }