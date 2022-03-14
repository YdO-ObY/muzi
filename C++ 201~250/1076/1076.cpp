#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string color[10] = {"black", "brown", "red","orange","yellow","green","blue","violet","grey","white"};
    long long value[10] {0,1,2,3,4,5,6,7,8,9};
    long long multi[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

    string s1,s2,s3;

    long long num1 = 0, num2 = 0, num3 = 0, result = 0;
    

    cin >> s1 >> s2 >> s3;

    for (int i = 0; i < 10; i++)
    {
        if(color[i] == s1)
            num1 = i;
    }
    for (int i = 0; i < 10; i++)
    {
        if(color[i] == s2)
            num2 = i;
    }
    for (int i = 0; i < 10; i++)
    {
        if(color[i] == s3)
            num3 = multi[i];
    }
    result = (num1*10 + num2)*num3;

    cout << result << '\n';    
}