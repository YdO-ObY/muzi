#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    string m1, m2;
    bool res = true;

    cin >> N >> M;
    vector<string> m_vec, m2_vec;

    // M입력
    for (int i = 0; i < N; i++)
    {
        cin >> m1;
        m_vec.push_back(m1);

        string s = "";
        for (int j = 0; j < m1.size(); j++)
        {
            s += m1[j];
            s += m1[j];
        }
        m2_vec.push_back(s);
    }

    // 2M입력
    for (int i = 0; i < N; i++)
    {
        cin >> m2;
        if (m2 != m2_vec[i])
        {
            res = false;
            break;
        }
    }


    if(res == true)
        cout << "Eyfa" <<'\n';
    else
        cout << "Not Eyfa" <<'\n';

}