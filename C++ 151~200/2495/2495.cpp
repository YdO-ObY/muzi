#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T = 3;
    string s;

    while (T--)
    {
        cin >> s;
        int count = 1;
        int max = 1;
        for (int j = 0; j < s.size()-1; j++)
        {
            if(s[j] == s[j+1])
                count++;
            else
                count = 1;
            if(max < count)
                max = count;
        }
        cout << max << '\n';
    }
}



// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int T =3, num;
//     vector<int> 
//     while (T--)
//     {
        
//     }
    
// }

// #include <iostream>
// #include <string>
 
// using namespace std;
 
// int main() {
 
//     string str;
    
//     for(int i=0; i<3; i++){
//         cin>>str;
//         int cnt=1;  
//         int max=1;
//         for(int j=0; j<str.length()-1; j++){
//             if(str[j]==str[j+1]){   
//                 cnt++;
 
//                 if(cnt>max){
//                     max=cnt;
//                 }
//             }
//             else{       // keypoint
//                 cnt=1;  // 연속구간이 없으면 1 출력
//             }           
//         }
//         cout<<max<<"\n";
//     }
//     return 0;
// }
