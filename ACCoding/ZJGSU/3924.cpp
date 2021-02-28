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
    char s, t;
    cin >> s;
    cout << s;
    t = s;
    while(cin >> s){
        if(t == s){
            continue;
        }
        cout << s;
        t = s;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}