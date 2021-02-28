class Solution {
public:
    void dfs(vector<vector<int> > &isConnected, vector<int> &flag, int local){
        for(int i = 0; i < isConnected.size(); i++){
            if(isConnected[local][i] && !flag[i]){
                flag[i] = 1;
                dfs(isConnected, flag, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        if(isConnected.empty())    return 0;
        int res = 0;
        int n= isConnected.size();
        vector<int> flag(n, 0);
        for(int i = 0; i < n; i++){
            if(flag[i]) continue;
            int j = i;
            for(; j < n; j++){
                if(isConnected[i][j] == 1 && !flag[j]){
                    flag[i] = 1;
                    dfs(isConnected, flag, i);
                    break;
                }
            }
            if(j != n)  res++;
        }
        return res;
    }
};