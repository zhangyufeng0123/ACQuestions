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
    int m, n, a ,b;
    cin >> m >> n >> a >> b;
    vector<string>  rec(m);
    for(int i = 0; i < m; i++){
        cin >> rec[i];
    }
    for(int i = 0; i < m * a; i++){
        for(int j = 0; j < n * b; j++){
            cout << rec[i / a][j / b];
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}