class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b){
        if(a[0] == b[0])    return a[1] < b[1];
        return a[0] < b[0];
    }

    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        if(dominoes.empty())    return 0;
        /*
        for(auto dominoe: dominoes){
            if(dominoe[0] > dominoe[1]) swap(dominoe[0], dominoe[1]);
            cout << dominoe[0] << ' ' << dominoe[1] << endl;
        }
        */
        for(int i = 0; i < dominoes.size(); i++){
            if(dominoes[i][0] > dominoes[i][1]) swap(dominoes[i][0], dominoes[i][1]);
        }
        sort(dominoes.begin(), dominoes.end(), cmp);
        int res = 0;
        for(int i = 0; i < dominoes.size(); i++){
            for(int j = i + 1; j < dominoes.size(); j++){
                if(dominoes[i][0] == dominoes[j][0] && dominoes[i][1] == dominoes[j][1])    res++;
                else{
                    //cout << i << ' ' << j << endl;
                    break;
                }
            }
        }
        return res;
    }
};