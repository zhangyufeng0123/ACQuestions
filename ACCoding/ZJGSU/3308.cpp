#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>

using namespace std;
typedef long long ll;

const int maxn = 1e6 + 10;
const double inf = 0.00001;

void solve() {
    string start = "START", end = "END", endof = "ENDOFINPUT";
    string str;
    while(1){
        getline(cin, str);
        if(str == endof)    break;
        if(str == start){
            while(1){
                getline(cin, str);
                if(str == end)  break;
                for(int i = 0; i < str.size(); i++){
                    if(str[i] >= 'A' && str[i] <= 'Z'){
                        cout << char(65 + (int(str[i] - 'A') + 21) % 26);
                    }else cout << str[i];
                }
            }
            cout << endl;
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