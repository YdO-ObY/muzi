#include <iostream>

using namespace std;

int main()
{
    int n, m, c, sum_c;
    double g, avg_g;
    //학기 수
    cin >> n;

    while (n--)
    {
        //과목 수
        cin >> m;
        sum_c =0, avg_g =0;
        while(m--)
        {
            //c 학점, g 성적
            cin >> c >> g;
            sum_c += c;
            avg_g += g*c;
        }
        //소수 자리수 
        cout << fixed;
        cout.precision(1);
        cout << sum_c << " " << avg_g/sum_c << "\n";
    }
}