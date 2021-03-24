#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <queue>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int maxn = 50;
const double inf = 0.00001;

int num[maxn];

void init() {
    int zero = 1, one = 1;
    for (int i = 1; i < maxn; i++) {
        num[i] = zero + one;
        int tmp_one = zero, tmp_zero = one + zero;
        one = tmp_one;
        zero = tmp_zero;
    }
}

void solve() {
    init();
    int T, t = 0;
    cin >> T;
    while (T--) {
        if (t) cout << endl;
        cout << "Scenario #" << ++t << ":" << endl;
        int n;
        cin >> n;
        cout << num[n] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}