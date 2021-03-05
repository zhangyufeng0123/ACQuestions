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

void solve() {
    string str1, str2;
    while (getline(cin, str1)) {
        getline(cin, str2);
        int w1[26], w2[26];
        memset(w1, 0, sizeof(w1));
        memset(w2, 0, sizeof(w2));
        for (int i = 0; i < str1.size(); i++) {
            w1[str1[i] - 'a']++;
        }
        for (int i = 0; i < str2.size(); i++) {
            w2[str2[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < min(w1[i], w2[i]); j++){
                cout << char('a' + i);
            }
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
