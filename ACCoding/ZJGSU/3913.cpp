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
typedef pair<int, int> p;

void solve() {
    string str;
    cin >> str;
    stack<int> st;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(')   st.push(1);
        else{
            if(st.empty()){
                cout << "No" << endl;
                return ;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty())  cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
}
