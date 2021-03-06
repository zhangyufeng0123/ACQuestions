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

struct node{
    string name;
    int height;
    int money;
};

static bool money(node &a, node &b){
    return a.money > b.money;
}

static bool height(node &a, node &b){
    return a.height > b.height;
}

void solve() {
    int n;
    cin >> n;
    vector<node> stu(n);
    for(int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].height >> stu[i].money;
    }
    sort(stu.begin(), stu.end(), money);
    int res = 0;
    string str = "Suxiao";
    for(int i = 0; i < n; i++){
        if(stu[i].name == str){
            res = i;
            break;
        }
    }
    sort(stu.begin(), stu.end(), height);
    for(int i = 0; i < n; i++){
        if(stu[i].name == str){
            if(i < res) cout << "HEIGHT" << endl;
            else if(i == res) cout << "EQ" << endl;
            else cout << "MONEY" << endl;
            return ;
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
