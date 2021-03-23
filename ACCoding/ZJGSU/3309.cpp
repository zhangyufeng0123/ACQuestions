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
    int n;
    cin >> n;
    vector<string> name;
    string tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        name.push_back(tmp);
    }
    int m, k;
    char t;
    cin >> m >> t >> k;
    m--;
    while(n > 0){
        m = m + k - 1;
        m %= n;
        cout << name[m] << endl;
        name.erase(name.begin() + m);
        n--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}