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
typedef pair<int, int> p;

const int maxn = 1e6 + 10;
int nums[maxn];

void solve() {
    int T;
    cin >> T;
    while(T--){
        int n, x;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        sort(nums, nums + n);
        int i = 0, j = n - 1;
        while(j > i){
            if(nums[i] + nums[j] == x)  break;
            else if(nums[i] + nums[j] > x) j--;
            else i++;
        }
        if(i == j){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
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