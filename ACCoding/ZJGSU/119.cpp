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

const int maxn = 1e7 + 10;
const double inf = 0.00001;
bool notprime[maxn];

void solve() {
    notprime[0] = notprime[1] = false;
    for(int i = 2; i < maxn; i++){
        if(!notprime[i]){
            if(i > maxn / i)    continue;
            else{
                for(int j = i + i; j < maxn; j += i)    notprime[j] = true;
            }
        }
    }

    int n, t = 0;
    while(cin >> n){
        cout << "Case #" << ++t << ": ";
        if(notprime[n]){
            cout << "What a fxcking day" << endl;
        }else{
            cout << "I'm richer than any one" << endl;
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
