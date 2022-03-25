#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int num, idx;

    cin >> num >> idx;

    stack<char> st;

    if(idx == 10)
    {
        cout << num;
        return 0;
    }
    while (num > 0)
    {
        char ch = ' ';
        if((num % idx) > 9)
            ch = (num % idx) - 10 + 'A';
        else
            ch = (num % idx) + '0';
            
        st.push(ch);

        num /= idx;
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    
}