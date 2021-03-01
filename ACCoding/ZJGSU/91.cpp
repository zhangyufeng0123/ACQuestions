#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <cmath>
using namespace std;
typedef long long ll;

const int maxn = 1e6 + 10;
const double inf = 0.00001;

int notprime[maxn];
vector<int> prime;

void init(){
    notprime[0] = notprime[1] = 1;
    for(int i = 2; i < maxn; i++){
        if(!notprime[i]){
            prime.push_back(i);
            if(i > maxn / i)    continue;
            for(int j = i; j < maxn; j += i)
                notprime[j] = 1;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    init();
    cout << n << '=';
    int flag = 0, k = 0;
    while(n >= 2){
        while(n % prime[k] != 0){
            k++;
        }
        if(flag){
            cout << '*';
        }
        n /= prime[k];
        cout << prime[k];
        flag = 1;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}