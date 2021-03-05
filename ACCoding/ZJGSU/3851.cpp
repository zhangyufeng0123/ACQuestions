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
map<char, char> ma;

void init(){
    ma['w'] = 'q';
    ma['e'] = 'w';
    ma['r'] = 'e';
    ma['t'] = 'r';
    ma['y'] = 't';
    ma['u'] = 'y';
    ma['i'] = 'u';
    ma['o'] = 'i';
    ma['p'] = 'o';
    ma['['] = 'p';
    ma['s'] = 'a';
    ma['d'] = 's';
    ma['f'] = 'd';
    ma['g'] = 'f';
    ma['h'] = 'g';
    ma['j'] = 'h';
    ma['k'] = 'j';
    ma['l'] = 'k';
    ma[';'] = 'l';
    ma['x'] = 'z';
    ma['c'] = 'x';
    ma['v'] = 'c';
    ma['b'] = 'v';
    ma['n'] = 'b';
    ma['m'] = 'n';
    ma[','] = 'm';
}

void solve() {
    int T;
    init();
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            cout << ma[str[i]];
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
