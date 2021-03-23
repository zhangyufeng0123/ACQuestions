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

void print(string str){
    int k = 0;
    for(int i = 1; i < str.size(); i++){
        if(str[i] == '1'){
            k = i;
            break;
        }
    }
    if(k == 0){
        cout << 0 << endl;
    }else{
        if(str[0] == '1')   cout << '-';
        for(int i = k; i < str.size(); i++){
            cout << str[i];
        }
        cout << endl;
    }
}

void solve() {
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        if(k == 0){
            print(str);
        }else{
            if(str[0] == '1'){
                int t = 0;
                for(int i = n - 1; i > 0; i--){
                    if(str[i] == '1'){
                        t = i;
                        break;
                    }
                }
                if(t == 0){
                    cout << '-' << str << endl;
                    continue;
                }
                str[t] = '0';
                for(int i = t + 1; i < n; i++){
                    str[i] = '1';
                }
                for(int i = 1; i < n; i++){
                    if(str[i] == '1')   str[i] = '0';
                    else str[i] = '1';
                }
            }
            print(str);
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