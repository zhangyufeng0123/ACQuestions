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

const int maxn = 7e4;
int notprime[maxn], prime[maxn];
int k = 0;

void init(){
    memset(notprime, 0, sizeof(notprime));
    notprime[0] = notprime[1] = 1;
    for(int i = 2; i < maxn; i++){
        if(!notprime[i]){
            prime[k++] = i;
            if(i > maxn / i)    continue;
            for(int j = i * i; j < maxn; j += i){
                notprime[j] = 1;
            }
        }
    }
}

void solve() {
    init();
    int m, n;
    while(cin >> m >> n){
        int res = 0;
        if(m > n){
            swap(m, n);
        }
        for(int i = 0; i < k; i++){
            if(prime[i] >= n)    break;
            if(prime[i] > m){
                res += prime[i];
            }
        }
        cout << res << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
