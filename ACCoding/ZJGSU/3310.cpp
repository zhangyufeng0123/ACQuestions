#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <map>

using namespace std;
typedef long long ll;

void print(int a){
    if(a < 10){
        cout << '0' << a;
    }else{
        cout << a;
    }
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        char tmp;
        int year, month, day, hour, min, sec;
        cin >> year >> tmp >> month >> tmp >> day >> tmp >> hour >> tmp >> min >> tmp >> sec;
        print(month);
        cout << '/';
        print(day);
        cout << '/';
        if(year < 10){
            cout << "000" << year;
        }else if(year < 100){
            cout << "00" << year;
        }else if(year < 1000){
            cout << "0" << year;
        }else{
            cout << year;
        }
        cout << '-';
        int flag = 0;
        if(hour >= 12){
            flag = 1;
            hour -= 12;
        }if(hour % 12 == 0){
            hour = 12;
        }
        print(hour);
        cout << ':';
        print(min);
        cout << ':';
        print(sec);
        if(flag){
            cout << "pm" << endl;
        }else{
            cout << "am" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
