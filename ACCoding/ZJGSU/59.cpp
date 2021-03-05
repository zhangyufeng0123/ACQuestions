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

struct point {
    int x, y;
};

int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

void solve() {
    int a, b;
    cin >> a >> b;
    int num = gcd(a, b);
    cout << a * b / num << ' ' << num << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
