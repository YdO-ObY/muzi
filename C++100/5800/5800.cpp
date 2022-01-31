#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, s, val;
    
    cin >> T;

    for (int i = 1; i <= T; i++)    
    {
        cin >> s;
        vector<int> vec;
        //최대값 , 최솟값, 점수차이
        int max = 0, min = 0, dif = 0;
        while (s--)
        {
            cin >> val;
            vec.push_back(val);
        }
        sort(vec.begin() , vec.end());

        max = vec.back();
        min = vec.front();

        for (int j = 0; j < vec.size() - 1; j++)
        {
            if(vec[j+1]-vec[j] > dif)
                dif = vec[j+1]-vec[j];
        }

        cout << "Class " << i <<'\n';
        cout << "Max " <<  max <<", Min " <<  min << ", Largest gap "<<dif<<'\n';
        
        
    }
    
}