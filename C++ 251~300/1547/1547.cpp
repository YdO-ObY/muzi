#include <iostream>
#include <string>

using namespace std;

void swap(int num, int num2)
{
    int temp = num;
    num = num2;
    num2 = temp;
}

int main()
{
    int arr[4] = {0, 1, 0, 0};
    int T;

    cin >> T;

    while (T--)
    {
        int X, Y, x = 0, y = 0;

        cin >> X >> Y;

        int temp = 0;
        temp = arr[X];
        arr[X] = arr[Y];
        arr[Y] = temp;
    
    }

    for (int i = 0; i < 4; i++)
    {
        if(arr[i] == 1)
            cout << i <<'\n';
    }
   
}