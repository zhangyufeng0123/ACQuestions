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
    vector<string> str;
    string tmp = ".exe";
    int n;
    while (cin >> n && n) {
        str.clear();
        string tmpe;
        for (int i = 0; i < n; i++) {
            cin >> tmpe;
            str.push_back(tmpe);
        }
        sort(str.begin(), str.end());
        for(int i = 1; i < n; i++){
            if(str[i].size() == str[i - 1].size() + 4){
                if(str[i].substr(0, str[i - 1].size()) == str[i - 1] && str[i].substr(str[i].size() - 4, 4) == tmp){
                    cout << str[i] << endl;
                }
            }
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
