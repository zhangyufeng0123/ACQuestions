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
    while (T--) {
        int n;
        cin >> n;
        vector<int> weighs(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> weighs[i];
        }
        sort(weighs.begin(), weighs.end());
        int res = weighs[n - 1];
        for(int i = n - 2; i >= 0; i--){
            res = max(res, weighs[i] * (n - i));
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
