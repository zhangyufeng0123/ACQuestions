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
    int T;
    cin >> T;
    while(T--){
        int res = 0, tmp  = 0;
        int t = 0;
        string str;
        cin >> str;
        while(str[t] >= '0' && str[t] <= '9'){
            res = res * 10 + int(str[t++] - '0');
        }
        int flag = 0;
        for(int i = t; i < str.size(); i++){
            if(str[i] == '-'){
                if(flag != 0){
                    res += (flag * tmp);
                }
                flag = -1;
                tmp = 0;
            }else if(str[i] == '+'){
                if(flag != 0){
                    res += (flag * tmp);
                }
                flag = 1;
                tmp = 0;
            }else{
                tmp = tmp * 10 + int(str[i] - '0');
            }
        }
        res += (flag * tmp);
        cout << res << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}