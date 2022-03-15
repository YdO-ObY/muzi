#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, count = 0;
    string s1, s2;
    cin >> s1 >> N;

    while (N--)
    {
        cin >> s2;
        s2 +=s2;
        if (s2.find(s1) != s2.npos)
            count++;
    }

    cout << count <<'\n';
}

/*
맨 앞글자 맨뒤로 보내는 방법 생각중
그냥 같은 문자열을 붙여쓰면 되는거아닌가? 생각
15번째줄 = 같은문자열 2번 붙여보리기
*/