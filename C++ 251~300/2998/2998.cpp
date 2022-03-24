#include <iostream>
#include <string>

using namespace std;

int main()
{
    string binary_n;
    string res = "";

    cin >> binary_n;

    if (binary_n.size() % 3 == 1)
        binary_n = "00" + binary_n;
    else if (binary_n.size() % 3 == 2)
        binary_n = "0" + binary_n;

    for (int i = 0; i < binary_n.size(); i+=3)
    {
        int idx_num = 0;
        if(binary_n[i] == '1')
            idx_num += 4;
        if(binary_n[i+1] == '1')
            idx_num += 2;
        if(binary_n[i+2] == '1')
            idx_num += 1;

        cout << to_string(idx_num);
    }
    
}