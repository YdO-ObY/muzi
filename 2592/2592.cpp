#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n, sum=0, avg=0, mode_count = 0,mode_count_max=0, mode_val=0;
    array<int, 10> arr;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> n;
        arr[i] = n;
        sum += n;
    }

    avg = sum / 10;


    for (int i = 0; i < arr.size(); i++)
    {
        mode_count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[i] == arr[j])
            mode_count++;
            
            if(mode_count_max < mode_count){
                mode_count_max = mode_count;
                mode_val =arr[i];
            }
        }

    }
    
    cout << avg <<"\n" << mode_val << "\n";

    
    

}