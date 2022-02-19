#include <iostream>

using namespace std;

int main()
{
    int unit[6] = {1,1,2,2,2,8};
    int h_unit[6] = {0};
    int num;

    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        h_unit[i] = num;

        unit[i] = unit[i] - h_unit[i];  
    }

    for (int j = 0; j < 6; j++)
    {
        cout << unit[j] << " " ;
    }
}