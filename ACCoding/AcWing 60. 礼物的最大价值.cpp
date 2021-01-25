class Solution {
public:
    int getMaxValue(vector<vector<int>>& grid) {
        int rows = grid.size();
        if(!rows){
            return 0;
        }
        int cols = grid[0].size();
        if(!cols){
            return 0;
        }
        for(int i = 1; i < cols; i++){
            grid[0][i] += grid[0][i - 1];
        }
        for(int i = 1; i < rows; i++){
            grid[i][0] += grid[i - 1][0];
        }
        for(int i = 1; i < rows; i++){
            for(int j = 1; j < cols; j++){
                grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
            }
        }
        return grid[rows - 1][cols - 1];
    }
};