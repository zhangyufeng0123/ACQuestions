class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())  return 0;
        sort(points.begin(), points.end(), cmp);
        int res = 1;
        int prev = points[0][1];
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > prev){
                res++;
                prev = points[i][1];
            }
        }
        return res;
    }
};