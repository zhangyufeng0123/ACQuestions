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

void print1(int a, int b, int c){
    cout << a;
    for(int i = a + c; i <= b; i += c){
        cout << ' ' << i;
    }
}

void print2(int a, int b, int c){
    cout << a;
    for(int i = a - c; i >= b; i -= c){
        cout << ' ' << i;
    }
}

void solve() {
    string str;
    while(getline(cin, str)){
        int nums[3] = {}, k = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' ') k++;
            else    nums[k] = nums[k] * 10 + int(str[i] - '0');
        }
        if(k == 0 && nums[0] == 0){
            break;
        }
        if(k == 0){
            for(int i = 0; i < nums[0]; i++){
                cout << i + 1;
                if(i != nums[0] - 1){
                    cout << ' ';
                }
            }
            //cout << endl;
        }else if(k == 1){
            if(nums[0] > nums[1]){
                print2(nums[0], nums[1], 1);
            }else{
                print1(nums[0], nums[1], 1);
            }
        }else{
            if(nums[0] > nums[1])   print2(nums[0], nums[1], nums[2] + 1);
            else print1(nums[0], nums[1], nums[2] + 1);
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
