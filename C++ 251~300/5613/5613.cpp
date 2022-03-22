#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, op;
    bool first = true;
    int res = 0;

    while (true)
    {
        cin >> s;

        if(s == "=")
        {
            cout << res ;
            break;
        }
        //첫입력은 무조건 덧셈으로 생각
        if (first == true)
        {
            res += stoi(s);
            first = false;
        }

        if ('0' <= s[0] && s[0] <= '9')
        {
            if(op == "+")
                res += stoi(s);
            else if(op == "-")
                res -= stoi(s);
            else if(op == "*")
                res *= stoi(s);
            else if(op == "/")
                res /= stoi(s);
        }
        else
            op = s;
        
    }
}