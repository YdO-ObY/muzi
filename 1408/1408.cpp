#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    
    string a ,b;

    cin >> a;
    cin >> b;

    // 1h = 3600s, 1m=60s
    int time1, time2, total = 24*60*60, time3;

    //hh:mm:ss
    //01234567
    
    time1 = stoi(a.substr(0,2)) * 3600 + stoi(a.substr(3,5)) * 60 + stoi(a.substr(6));
    time2 = stoi(b.substr(0,2)) * 3600 + stoi(b.substr(3,5)) * 60 + stoi(b.substr(6));
    if(time1 > time2){
        time3 = total - (time1- time2);
    }
    else {
        time3 = time2-time1;
    }
    cout.fill('0');
    cout << setw(2) <<time3/3600 << ":" << setw(2) <<time3%3600/60 << ":" << setw(2) <<time3%3600%60;
}