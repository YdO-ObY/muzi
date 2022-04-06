#include <iostream>
#include <string>
#include <vector>

using namespace std;

void TwoNumChange(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num;
    vector<int> vec;

    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    while (true)
    {
        bool res = true;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] > vec[i + 1] && i != vec.size() - 1)
            {
                TwoNumChange(&vec[i], &vec[i + 1]);

                for (int j = 0; j < vec.size(); j++)
                {
                    cout << vec[j] << " ";

                    if (j == vec.size() - 1)
                        cout << '\n';
                }
                res = false;
            }            
        }

        if (res == true)
            break;
    }
}