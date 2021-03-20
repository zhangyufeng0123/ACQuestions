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
    int m, n;
    while(cin >> m >> n){
        vector<int> nums(10, 0);
        for(int i = m; i <= n; i++){
            int t = i;
            while(t){
                nums[t % 10]++;
                t /= 10;
            }
        }
        cout << nums[0];
        for(int i = 1; i < 10; i++)
            cout << ' ' << nums[i];
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
