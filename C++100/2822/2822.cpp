#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //문제 수 , 총합 , 최대값 위치, 점수
    int T = 8, total = 0, idx = 0, v;
    int arr[8];
    int top5[5];
    for (int i = 0; i < 8; i++)
    {
        cin >> v;
        arr[i] = v;
    }
    //top5 점수 고르기
    for (int j = 0; j < 5; j++)
    {
        int max = 0;
        for (int k = 0; k < 8; k++)
        {
            if(max < arr[k]){
                idx = k;
                max = arr[k];
            }
    
        }
        //최고 점수 값 -1으로 변경 - 다음 루프때 제외시키기 위함
        arr[idx] = -1;
        total += max;
        top5[j] = idx;
    }

    sort(top5, top5+5);
    

    cout << total << "\n";
    
    //index값 + 1로 출력
    for (int l = 0; l < 5; l++)
    {
        cout <<top5[l]+1 << ' ';
    }
    
}