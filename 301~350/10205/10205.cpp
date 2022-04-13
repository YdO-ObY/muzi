#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int T;

    cin >>T;

    for (int i = 1; i <= T; i++)
    {
        int head;
        string action;
        cin >> head >> action;

        for (int i = 0; i < action.size(); i++)
        {
            if(action[i] == 'c')
                head++;
            else
                head--;
            if(head == 0)
                break;
        }

        cout << "Data Set "<<i<<":" << '\n' << head <<'\n'; 
        if(i != T)
        cout << '\n';
        

    }
    
}