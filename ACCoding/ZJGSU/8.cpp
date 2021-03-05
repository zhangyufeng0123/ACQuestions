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

const int maxn = 1e6 + 10;
const double inf = 0.00001;
int nums[10];

void init(){
    for(int i = 0; i < 10; i++){
        nums[i] = 8 * 3 * 11 + 8 * 2;
    }
    nums[0] += 7;
    nums[1] += 14;
    nums[2] += 6;
    for(int i = 3; i < 8; i++){
        nums[i] += 13;
    }
    nums[8] += 14;
    nums[9] += 14;
}

void solve() {
    init();
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        cout << nums[int(str.back() - '0')] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
