#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T,N, num;

    cin >> T;
    cout << fixed;
    cout.precision(3);

    while (T--)
    {
        cin >> N;
        vector<int> vec;
        vec.resize(N);
        int total =0, avg =0, count = 0;

        for (int i = 0; i < vec.size(); i++)        
        {
            cin >>num;
            vec[i] = num;
            total += num;
        }

        avg =total/ N;

        for (int i = 0; i < vec.size(); i++)
        {   
            if(vec[i] > avg)
                count++;
        }
        float res = (float)count  / (float)N * 100;

        cout << res <<"%" <<'\n';
        
    }
    
}  