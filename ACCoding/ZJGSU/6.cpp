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

static bool cmp(p & a, p & b){
    return a.first < b.first;
}

void solve() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<p> tracks;
        p tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp.first >> tmp.second;
            tracks.push_back(tmp);
        }
        sort(tracks.begin(), tracks.end(), cmp);
        int maxx = 50000, minn = 0;
        for(int i = 0; i < n - 1; i++){
            maxx = min(maxx, tracks[i + 1].first - tracks[i].first);
            minn = max(minn, tracks[i].second - tracks[i].first);
        }
        minn = max(tracks.back().second - tracks.back().first, minn);
        if(minn > maxx){
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