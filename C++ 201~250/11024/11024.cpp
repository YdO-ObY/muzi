#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int T, total;
    string s;

    cin >> T;
    cin.ignore();

    while (T--)
    {
        total = 0;
        getline(cin, s);

        string num = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
                num += s[i];
            else
            {
                total += stoi(num);
                num = "";
            }

            if(i == s.size()-1)
                total += stoi(num);
        }

        cout << total << '\n';
        
    }
    
}