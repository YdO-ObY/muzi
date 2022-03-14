#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    int arr[26] ={0};
    for (int i = 0; i < 50; i++)
    {
        getline(cin ,s);

        for (int j = 0; j < s.size(); j++)
        {
            arr[s[j]-'a']++;
        }
    }

    int max =0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    

    for (int i = 0; i < 26; i++)
    {
        char ch ='a';
        if(arr[i] == max)
            cout << (char)(ch+i);
    }
    
    
}