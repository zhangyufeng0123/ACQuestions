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
        int a, b;
        cin >> a >> b;
        if(a < b){
            if(a == 1){
                cout << "1 frog has 1 mouth, 2 eyes and 4 legs, jumps into the water with a splash." << endl;
                a++;
            }
            for(int i = a; i <= b; i++){
                cout << i << " frogs have "<< i <<  " mouths, " << i * 2 << " eyes and " << i * 4 << " legs, jump into the water with splash";
                for(int j = 0; j < i - 1; j++){
                    cout << " splash";
                }
                cout << '.' << endl;
            }
        }else{
            for(int i = a; i >= b + 1; i--){
                cout << i << " frogs have "<< i <<  " mouths, " << i * 2 << " eyes and " << i * 4 << " legs, jump into the water with splash";
                for(int j = 0; j < i - 1; j++){
                    cout << " splash";
                }
                cout << '.' << endl;
            }
            if(b == 1){
                cout << "1 frog has 1 mouth, 2 eyes and 4 legs, jumps into the water with a splash." << endl;
            }else{
                cout << b << " frogs have "<< b <<  " mouths, " << b * 2 << " eyes and " << b * 4 << " legs, jump into the water with splash";
                for(int j = 0; j < b - 1; j++){
                    cout << " splash";
                }
                cout << '.' << endl;
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
