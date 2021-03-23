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

void solve() {
    int T;
    cin >> T;
    while(T--){
        string str1, str2;
        cin >> str1 >> str2;
        int word1[26] = {0}, word2[26] = {0};
        for(int i = 0; i < str1.size(); i++){
            word1[int(str1[i] - 'A')]++;
        }
        for(int i = 0; i < str2.size(); i++){
            word2[int(str2[i] - 'A')]++;
        }
        int flag = 0;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < min(word2[i], word1[i]); j++){
                cout << char('A' + i);
                flag = 1;
            }
        }
        if(!flag){
            cout << -1;
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