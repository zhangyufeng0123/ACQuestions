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
    int t = 0;
    int n;
    string str;
    while(cin >> n){
        cin.get();
        //getchar();
        if(n == 0)  break;
        cout << "Case #" << ++t << ":" << endl;
        for(int e = 0; e < n; e++){
            int x[10] = {0}, y[10] = {0}, z[10] = {0};
            //int xx[10] = {0}, yy[10] = {0}, zz[10] = {0};
            getline(cin, str);
            for(int i = 0; i < (str.size() + 1) / 6; i++){
                if(str[i * 6 + 2] == 'X'){
                    int a = str[i * 6] - '0', b = str[i * 6 + 4] - '0';
                    x[b] += a;
                }else if(str[i * 6 + 2] == 'Y'){
                    int a = str[i * 6] - '0', b = str[i * 6 + 4] - '0';
                    y[b] += a;
                }else{
                    int a = str[i * 6] - '0', b = str[i * 6 + 4] - '0';
                    z[b] += a;
                }
            }
            int flag = 0;
            for(int i = 9; i >= 1; i--){
                if(x[i]){
                    if(flag)    cout << " + ";
                    cout << x[i] * i << " * X ^ " << i - 1;
                    flag = 1;
                }
            }
            for(int i = 9; i >= 1; i--){
                if(y[i]){
                    if(flag)    cout << " + ";
                    cout << y[i] * i << " * Y ^ " << i - 1;
                    flag = 1;
                }
            }
            for(int i = 9; i >= 1; i--){
                if(z[i]){
                    if(flag)    cout << " + ";
                    cout << z[i] * i << " * Z ^ " << i - 1;
                    flag = 1;
                }
            }
            if(z[0] + x[0] + y[0] != 0){
                if(flag)  cout << " + ";
                cout << z[0] + x[0] + y[0];
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