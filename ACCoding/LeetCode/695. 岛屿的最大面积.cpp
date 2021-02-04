class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
        if(grid.empty())    return 0;
        int res = 0;
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<int> > flag;
        for(int i = 0; i < rows; i++){
            vector<int> tmp(cols, 0);
            flag.push_back(tmp);
        }
        queue<pair<int, int>> que;
        pair<int, int> tmpe, tmp;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] && !flag[i][j]){
                    flag[i][j] = 1;
                    int s = 1;
                    tmpe.first = i, tmpe.second = j;
                    que.push(tmpe);
                    while(!que.empty()){
                        tmpe = que.front();
                        que.pop();
                        for(int k = 0; k < 4; k++){
                            int tmpx = tmpe.first + dx[k];
                            int tmpy = tmpe.second + dy[k];
                            if(tmpx >= 0 && tmpx < rows && tmpy >= 0 && tmpy < cols){
                                if(grid[tmpx][tmpy] && !flag[tmpx][tmpy]){
                                    tmp.first = tmpx;
                                    tmp.second = tmpy;
                                    que.push(tmp);
                                    flag[tmpx][tmpy] = 1;
                                    s++;
                                }
                            }
                        }
                    }
                    res = max(res, s);
                }
            }
        }
        return res;
    }
};