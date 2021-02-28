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

int calculate(int a, int b, int c){
    if(a <= 0)  return b;
    else if(b * 2 - b / 2 > c)  return b;
    else return calculate(a - 1, b * 2 - b / 2, c);
}

void solve() {
    int a, b, c;
    while(cin >> a >> b >> c && (a || b || c)){
        if(b == 0) {
            cout << 0 << endl;
            continue;
        }
        cout << calculate(a - 2, b, c) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
