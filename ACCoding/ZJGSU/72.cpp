#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <cmath>

using namespace std;

typedef long long ll;
typedef pair<int, int> p;

const int maxn = 1e6 + 10;
int nums[maxn];

void solve() {
    double high, res = 0.0;
    int n;
    cin >> high >> n;
    while(n--){
        res += high;
        high /= 2.0;
        res += high;
    }
    cout << fixed << setprecision(2) << high << ' ' << res - high << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}