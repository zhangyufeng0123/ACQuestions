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

const int maxn = 6e4;
int notprime[maxn], prime[maxn], k = 0;

void init(){
    notprime[0] = notprime[1] = 1;
    for(int i = 2; i < maxn; i++){
        if(!notprime[i]){
            prime[k++] = i;
            if(i > maxn / i)    continue;
            else{
                for(int j = i * i; j < maxn; j += i){
                    notprime[j] = 1;
                }
            }
        }
    }
}

void solve() {
    init();
    int hour1, hour2, min1, min2;
    char tmp;
    while(cin >> hour1){
        cin >> tmp;
        cin >> min1;
        cin >> hour2 >> tmp >> min2;
        int time1 = hour1 * 60 + min1, time2 = hour2 * 60 + min2;
        int res = 0;
        for(int i = time1; i <= time2; i++){
            if(!notprime[i / 60 * 2500 + i % 60])   res++;
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
