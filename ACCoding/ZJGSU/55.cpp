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

const int maxn = 1e6 + 10;
const double inf = 0.00001;

void solve() {
    string str;
    char tmpe;
    getline(cin, str);
    cin >> tmpe;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != tmpe){
            cout << str[i];
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}