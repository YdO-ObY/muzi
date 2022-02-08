#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T;
    
    cin >> T;
    //getline 버퍼 제거
    cin.ignore();

    while (T--)
    {
        string s;
        //공백 포함 입력 방법
        getline(cin, s);

        vector<char> vec(s.begin(), s.end());
        
        if((int)vec[0] >= 97)
            vec[0] = (char)(vec[0]-32);

        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i];
        }
        cout << "\n";
    }
}