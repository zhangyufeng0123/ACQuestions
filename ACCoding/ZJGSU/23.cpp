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

ll num[100];

void init(){
    num[1] = 1;
    num[2] = 2;
    for(int i = 3; i <= 90; i++){
        num[i] = num[i - 1] + num[i - 2];
    }
}

void solve() {
    int n;
    init();
    while(cin >> n && n){
        cout << num[n] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}