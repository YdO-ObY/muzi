#include <iostream>
#include <string>

using namespace std;

int min(string num)
{
    string num_ ="";
    for (int i = 0; i < num.size(); i++)
    {
        if(num[i] == '5' || num[i] == '6')
            num_ += '5';
        else
            num_ += num[i];
    }
    return stoi(num_);
}

int max(string num)
{
    string num_ ="";
    for (int i = 0; i < num.size(); i++)
    {
        if(num[i] == '5' || num[i] == '6')
            num_ += '6';
        else
            num_ += num[i];
    }
    return stoi(num_);
}

int main()
{
    string A, B;
    int m_val =0, M_val =0;
    cin >> A >> B;

    m_val += min(A);
    m_val += min(B);
    M_val += max(A);
    M_val += max(B);

    cout << m_val << " " << M_val << '\n';
}