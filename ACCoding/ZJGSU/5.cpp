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

struct fruit{
    int order;
    int apples;
    int pears;
};

static bool cmp(fruit &a, fruit &b){
    if(a.apples == b.apples){
        if(a.pears == b.pears){
            return a.order < b.order;
        }
        return a.pears > b.pears;
    }
    return a.apples > b.apples;
}

void solve() {
    int T;
    cin >> T;
    while(T--){
        int m, n;
        cin >> m >> n;
        vector<fruit> fruits;
        fruit tmp;
        for(int i = 0; i < m; i++){
            cin >> tmp.apples >> tmp.pears;
            tmp.order = i + 1;
            fruits.push_back(tmp);
        }
        sort(fruits.begin(), fruits.end(), cmp);
        cout << fruits[0].order;
        for(int i = 1; i < n; i++){
            cout << ' ' << fruits[i].order;
        }
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