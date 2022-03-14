#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int T;
    string arr1, arr2;

    cin >> T;
    while (T--)
    {
        int hd =0;
        cin >> arr1 >> arr2;
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i] != arr2[i])
                hd++;
        }

        cout << "Hamming distance is " << hd <<"."<< '\n';
    }
}