#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    string s;
    cin >> T;

    while (T--)
    {
        cin >> s;
        int a=0, b=0;
        string num="";
        if(s =="P=NP")
        {
            cout << "skipped" << '\n';
        }
        else{
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i] != '+')
                    num += s[i];
                else
                {
                    a = stoi(num);
                    num = "";
                    }

                if(i == s.size()-1)
                    b = stoi(num);
            }
            cout << a+b << '\n';
        }    
    }
}