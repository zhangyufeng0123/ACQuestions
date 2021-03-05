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
    string str;
    while (getline(cin, str)) {
        string word;
        for (int i = 0; i < str.size(); i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                word += str[i];
            } else {
                if (!str.empty()) {
                    reverse(word.begin(), word.end());
                    cout << word;
                    word.clear();
                }
                cout << str[i];
            }
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            cout << word;
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
