#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T, num, total, max = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        vector<int>vec;
        int arr[7] = {0};
        total = 0;
        for (int j = 0; j < 4; j++)
        {
            //1~6 입력
            cin >> num;
            
            vec.push_back(num);
            //1~6 배열에 저장
            arr[num]++;
        }
        

        for (int i = 1; i < 7; i++)
        {
            int case1 = 0, case2 = 0;

            if(arr[i] == 4)
            {
                case1 = 50000 + i*5000;
                
            }
            else if(arr[i] == 3)
            {    
                case1 = 10000 + i*1000;
                
            }
            else if(arr[i] == 2)
            {
                for (int j = i+1; j < 7; j++)
                {
                    if(arr[j] == 2)
                        case2 = j*500;
                }

                if(case2 != 0)
                    case1 = 2000 + i*500;
                else
                    case1 = 1000 + i*100;
                
                
            }
            else if(arr[i] == 1)
            {
                case1 = i*100;
            }

            total = case1 +case2;
            
            if(max < total)
                max = total;
        }
    }
    cout << max << "\n";
}   