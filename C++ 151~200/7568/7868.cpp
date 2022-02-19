#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, H, W;
    vector<vector<int>> info;
    
    cin >> T;

    vector<int> rank;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W;
        vector<int> HandW;
        HandW.push_back(H);
        HandW.push_back(W);
        info.push_back(HandW);
    }
    for (int i = 0; i < T; i++)
    {
        int r_val = 1;

        for (int j = 0; j < T; j++)
        {
            if(i != j && info[i].front() < info[j].front())
            {
                if(info[i].back() < info[j].back())
                    r_val++;
            }
        }
        rank.push_back(r_val);
    }
    

    for (int r = 0; r < T; r++)
    {
        cout << rank[r] << " " ;
    }
    
    
}