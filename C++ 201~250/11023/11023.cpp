#include <iostream>

using namespace std;

int main(){
    string s, num="";
    getline(cin, s);
    int total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            num += s[i];

            if(i == s.size()-1)
                total += stoi(num);
        }
        else
        {
            total += stoi(num);
            num = "";
        }
    }
    cout << total << '\n';
}