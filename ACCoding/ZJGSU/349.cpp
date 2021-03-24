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

const int maxn = 1e5 + 10;
const double inf = 0.00001;

int notprime[maxn], prime[maxn], k = 0;

void init(){
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
    int a, b;
    init();
    while(cin >> a >> b){
        if(a == -1 && b == -1)  break;
        int res = 0;
        //if(a > b) swap(a, b);
        for(int i = 0; i < k; i++){
            if(prime[i] > b)break;
            if(prime[i] >= a) res++;
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