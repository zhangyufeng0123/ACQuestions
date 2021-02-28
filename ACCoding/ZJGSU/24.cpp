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

const int maxn = 1e6 + 10;
const double inf = 0.00001;

void solve() {
    double a, b, c;
    while(cin >> a >> b >> c){
        double p = (a + b + c) / 2.0;
        cout <<  fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}