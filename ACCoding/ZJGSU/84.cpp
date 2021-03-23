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
    string str;
    while(getline(cin, str)){
        int flag = 0;
        for(int i = 0; i < str.size() - 3; i++){
            if(str[i] == 'S' || str[i] == 's'){
                if(str[i + 1] == 'A' || str[i + 1] == 'a'){
                    if(str[i + 2] == 'L' || str[i + 2] == 'l'){
                        if(str[i + 3] == 'T' || str[i + 3] == 't'){
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        if(flag){
            cout << str << endl;
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
