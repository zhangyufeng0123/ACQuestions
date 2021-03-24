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

const int maxn = 105;
const double inf = 0.00001;

ll num[maxn], mon[maxn];

void init(){
    num[1] = mon[1] = 1;
    num[2] = 2;
    for(int i = 3; i < 90; i++){
        num[i] = num[i - 1] + num[i - 2];
    }
    for(int i = 2; i < 90; i++){
        mon[i] += (mon[i - 1] + num[i]);
    }
}

void solve() {
    int T;
    init();
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cout << mon[n] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}