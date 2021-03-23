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

struct node {
    string name;
    int data;
    int price;
};

static bool cmp(node &a, node &b) {
    return a.data * b.price > b.data * a.price;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<node> phones(n);
        for (int i = 0; i < n; i++) {
            cin >> phones[i].name >> phones[i].data >> phones[i].price;
        }
        sort(phones.begin(), phones.end(), cmp);
        for(int i= 0; i < n; i++){
            cout << i + 1 << ' ' << phones[i].name << ' ' << phones[i].data << ' ' << phones[i].price << endl;
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
