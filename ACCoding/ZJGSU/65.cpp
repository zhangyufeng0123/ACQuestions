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

const int maxn = 1005;
int nums[maxn][maxn];

void solve() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cin >> nums[i][j];
            }
        }
        for(int i = 1; i < n; i++){
            nums[i][0] += nums[i - 1][0];
            for(int j = 1; j < i; j++){
                nums[i][j] += max(nums[i - 1][j - 1], nums[i - 1][j]);
            }
            nums[i][i] += nums[i - 1][i - 1];
        }
        int maxx = nums[n - 1][0];
        for(int i = 1; i < n; i++){
            maxx = max(maxx, nums[n - 1][i]);
        }
        cout << maxx << endl;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}
