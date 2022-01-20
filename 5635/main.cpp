#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<pair<pair<int, int>,pair<int, string>>> person(n);

    for(int i = 0; i < n ; i++)
    {
        cin >> person[i].second.second >> person[i].second.first >> person[i].first.second >> person[i].first.first;   
    }

    sort(person.begin(), person.end());

    cout << person[n-1].second.second <<'\n'<< person[0].second.second << endl;
    
}