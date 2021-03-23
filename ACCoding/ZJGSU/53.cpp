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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << ' ';
        }
        for(int j = 0; j < i * 2 + 1; j++){
            cout << '*';
        }
        cout << endl;
    }
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j < n - i - 1; j++){
            cout << ' ';
        }
        for(int j = 0; j < i * 2 + 1; j++){
            cout << '*';
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
