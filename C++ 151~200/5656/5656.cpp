#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2, count = 1;
    string cp_op;
    while (true)
    {
        string res;
        cin >> num1 >> cp_op >> num2;
        if(cp_op == ">")
        {
            if(num1 > num2)
                res = "true";
        }
        else if(cp_op == ">=")
        {
            if(num1 >= num2)
                res = "true"; 
        }
        else if(cp_op == "<")
        {
            if(num1 < num2)
                res = "true"; 
        }
        else if(cp_op == "<=")
        {
            if(num1 <= num2)
                res = "true"; 
        }
        else if(cp_op == "==")
        {
            if(num1 == num2)
                res = "true"; 
        }
        else if(cp_op == "!=")
        {
            if(num1 != num2)
                res = "true"; 
        }
        else
            break;

        if(res == "")
            res = "false";

        cout << "Case " << count<<": " << res << '\n';
        count++;
    }
        
}