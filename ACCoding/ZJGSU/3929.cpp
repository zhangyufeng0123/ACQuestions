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
    int T;
    cin >> T;
    while(T--){
        int n, res = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            res ^= tmp;
        }
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
