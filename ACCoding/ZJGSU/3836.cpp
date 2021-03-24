#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <queue>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int maxn = 1005;
const double inf = 0.00001;

int notprime[maxn], prime[maxn];
int k = 0, res = maxn, res_m, res_n;

void init() {
    notprime[0] = notprime[1] = 1;
    for (int i = 2; i < maxn; i++) {
        if (!notprime[i]) {
            prime[k++] = i;
            if (i > maxn / i) continue;
            for (int j = i * i; j < maxn; j += i) notprime[j] = 1;
        }
    }
}

void dfs(int m, int n, vector<int> pr) {
    if (n == 1) return;
    for (int i = 0; i < pr.size(); i++) {
        if (n % pr[i] == 0) {
            m *= pr[i];
            n /= pr[i];
            if (m + n < res) {
                res_m = m;
                res_n = n;
                res = m + n;
            }
            dfs(m, n, pr);
            m /= pr[i];
            n *= pr[i];
        }
    }
}

void solve() {
    init();
    int a, b;
    while (cin >> a >> b){
        b /= a;
        int m = b;
        vector<int> pr;
        for (int i = 0; i < k; i++) {
            if(b % prime[i] == 0){
                int tmp = 1;
                while(b % prime[i] == 0){
                    b /= prime[i];
                    tmp *= prime[i];
                }
                pr.push_back(tmp);
            }
        }
        res_m = 1, res_n = m;
        res = 1 + m;
        dfs(1, m, pr);
        cout << a * min(res_n, res_m) << ' ' << a * max(res_m, res_n) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}