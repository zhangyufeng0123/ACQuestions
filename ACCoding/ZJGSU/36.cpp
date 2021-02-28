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

const int maxn = 1e6 + 10;
const double inf = 0.00001;
int letters[26];

void solve() {
    int T;
    string str;
    cin >> T;
    while(T--){
        cin >> str;
        memset(letters, 0, sizeof(letters));
        for(auto s : str){
            letters[int(s - 'A')]++;
        }
        for(int i = 0; i < 26; i++){
            if(letters[i] != 0){
                cout << letters[i] << char(i + 'A');
            }
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