#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int T, total;
    string s;
    
    cin >> T;

    while (T--)
    {
        total = 0;
        vector<string> vec;
        cin >> s;    
        vec.push_back(s.substr(0,3));
        vec.push_back(s.substr(4,7));
    
         //영문부분
        for (int i = 0; i < vec[0].size(); i++)
        {
            total += (vec.front()[i] - 'A')*pow(26,vec[0].size()-i-1);
        }

        //숫자부분
        total -= stoi(vec[1]);

        //cmath > fabs 절댓값 함수
        if(fabs(total) <= 100)
            cout << "nice" << '\n';
        else
            cout << "not nice" << '\n';
    }
  
}