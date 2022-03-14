#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s, num;
    int total = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {   
        if(s[i] != ',')
            num += s[i];
        else{
            total += stoi(num);
            num = "";
        }

        if(i == s.size()-1)
            total += stoi(num);

    }
    cout << total << '\n';
}