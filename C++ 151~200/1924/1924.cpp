// #include <iostream>

// using namespace std;

// int main()
// {
//     int x, y, day = 0;

//     cin >> x >> y;

//     for (int i = 1; i <= x; i++)
//     {
//         if(i != x)
//         {
//             switch (i)
//             {
//             case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//                 day += 31;
//                 break;
//             case 4: case 6: case 9: case 11:
//                 day += 30;
//                 break;
//             case 2:
//                 day += 28;
//                 break;
//             }
//         }
//         else
//             day += y;
//     }

//     switch (day % 7)
//     {
//     case 0:
//         cout << "SUN" <<'\n';
//         break;
//     case 1:
//         cout << "MON" <<'\n';
//         break;
//     case 2:
//         cout << "TUE" <<'\n';
//         break;
//     case 3:
//         cout << "WED" <<'\n';
//         break;
//     case 4:
//         cout << "THU" <<'\n';
//         break;
//     case 5:
//         cout << "FRI" <<'\n';
//         break;
//     case 6:
//         cout << "SAT" <<'\n';
//         break;
//     default:
//         break;
//     }
    
// }

#include <iostream>

using namespace std;

int main()
{
    int m, d;
    //월/일 배열로 만들어서 관리하면 간단해짐
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    cin >> m >> d;

    //1월은 일만 계산하면 되므로 제외
    for (int i = 1; i < m; i++){
        d += month[i-1];
    }

    cout << day[d%7] << '\n';
}