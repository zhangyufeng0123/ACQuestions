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

const int maxn = 1e6 + 10;
const double inf = 0.00001;

void solve() {
    int n;
    int t = 0;
    while (cin >> n) {
        getchar();
        int res = 0, flag = 0;
        string str, str1, str2;
        for (int i = 0; i < n; i++) {
            cin >> str1 >> str2;
            str = str1.substr(0, 2);
            if (str == "Pl") {
                res += 5;
            } else if (str == "Pr") {
                res += 8;
            } else if (str == "At") {
                res += 10;
                flag = 1;
            } else if (str == "La") {
                res += 15;
            } else if (str == "Sl") {
                res += 20;
            }
        }
        cout << "Case #" << ++t << ": ";
        if (flag && n >= 10) {
            res += 50;
        }
        cout << res << endl;
    }
}

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

    solve();
    return 0;
}
