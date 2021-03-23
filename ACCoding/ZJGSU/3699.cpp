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
    int l, n;
    while (cin >> l) {
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int start = 0, end = 0;
        for(int i = 0; i < n; i++){
            start += max(0, b[i] - a[i]);
            end += max(0, b[i] + a[i] - l);
        }
        if(start <= end){
            cout << 0 << endl << start << endl;
        }else{
            cout << l << endl << end << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}