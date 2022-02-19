#include <iostream>
#include <vector>

using namespace std;

void comp(vector<int> v1, vector<int> v2)
{
    int count[2] = {0};
    for (int i = 0; i < 10; i++)
    {
        if(v1[i] > v2[i])
            count[0]++;
        else if(v1[i] < v2[i])
            count[1]++;
    }

    if(count[0] > count[1])
        cout << "A" ;
    else if(count[0] < count[1])
        cout << "B" ;
    else
        cout << "D" ;
}

int main()
{
    int n;
    vector<int> input1, input2;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        input1.push_back(n);
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        input2.push_back(n);
    }

    comp(input1,input2);
            
}