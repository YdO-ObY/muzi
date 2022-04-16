// #include <ioseam>
// #include <sing>

// using namespace std;

// int main()
// {
//     sing arr[7] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
//     sing s;
//     int cnt = 0;
//     cin >> s;

//     for (int i = 0; i < s.size();)
//     {
//         sing s2 = "";
//         bool chg = false;
//         if (i + 2 <= s.size())
//         {
//             s2 = s.subs(i, i + 3);
//             if (s2 == "dz=")
//             {
//                 cnt++;
//                 i += 3;
//                 chg = true;
//             }
//         }

//         if (i + 1 <= s.size())
//         {
//             s2 = s.subs(i, i + 2);
//             if (s2 == *find(arr, arr + 7, s2))
//             {
//                 cnt++;
//                 i += 2;
//                 chg = true;
//             }
//         }

//         if(chg == false)
//         {
//             cnt++;
//             i++;
//         }
//         s2.clear();

//     }

//     cout << cnt << '\n';
// }



#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int num = 0;

	int i = 0;
	while (i < s.length()) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=')
				i++;
			else if (s[i + 1] == '-')
				i++;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-')
				i++;
			else if (s[i + 1] == 'z'&&s[i + 2] == '=')
				i += 2;
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') 
				i++;
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j')
				i++;
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') 
				i++;
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=')
				i++;
		}
		num++;
		i++;
	}
	cout << num << '\n';
}