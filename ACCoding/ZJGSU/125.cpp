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

void PrintRow(int n) {
    cout << ' ';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << ' ' << endl;
}

void PrintCol(int n) {
    cout << '|';
    for(int i = 0; i < n; i++){
        cout << ' ';
    }
    cout << '|' << endl;
}

void solve() {
    int n;
    cin >> n;
    PrintRow(n);
    for(int i = 0; i < n; i++){
        PrintCol(n);
    }

    PrintRow(n);

    for(int i = 0; i < n; i++){
        PrintCol(n);
    }
    
    PrintRow(n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}