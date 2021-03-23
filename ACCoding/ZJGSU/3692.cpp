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

void solve() {
    ll n;
    while(cin >> n){
        if(!n){
            cout << 0 << endl;
        }else if(n == 1){
            cout << 3 << endl;
        }else if(n == 2 || n == 3){
            cout << 6 << endl;
        }else{
            ll one = 0, two = 1, three = 1;
            for(int i = 3; i < n; i++){
                ll tmp_one = two + three, tmp_two = one + three, tmp_three = one + two;
                one = tmp_one;
                two = tmp_two;
                three = tmp_three;
            }
            cout << (one * 2 + two + three) * 3 << endl;
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
