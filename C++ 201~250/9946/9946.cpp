#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2;
    int num = 1;
    while (true)
    {
        int arr1[26] = {0};
        int arr2[26] = {0};
        bool check = true;
        cin >> s1 >> s2;

        if(s1 == "END")
            break;

        for (int i = 0; i < s1.size(); i++)
        {
            arr1[s1[i] - 'a']++;
        }

        for (int i = 0; i < s2.size(); i++)
        {
            arr2[s2[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i])
            {
                check = false;
                break;
            }
        }

        if (check == true)
            cout << "Case " << num << ": same" << '\n';
        else
            cout << "Case " << num << ": different" << '\n';

        num++;
    }
}