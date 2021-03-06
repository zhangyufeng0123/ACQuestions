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

const int maxn = 1e7 + 10;
const double inf = 0.00001;
bool notprime[maxn];

void solve() {
    int n, v1, v2, t;
    while (cin >> n) {
        cin >> v1 >> v2 >> t;

        if (t * (v1 - v2) >= n * 1000) {
            cout << fixed << setprecision(2) << n * 1000.0 / (v1 - v2) << endl;
        } else {
            cout << "NO" << endl;
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
