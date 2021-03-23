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

void solve() {
    string str;
    while(cin >> str){
        string res;
        int k = 0;
        for(int i = str.size() - 1; i >= 0; i--){
            if(str[i] >= '0' && str[i] <= '9'){
                if(k % 3 == 0 && k > 0)  res += ',';
                res += str[i];
                ++k;
            }
        }
        reverse(res.begin(), res.end());
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
