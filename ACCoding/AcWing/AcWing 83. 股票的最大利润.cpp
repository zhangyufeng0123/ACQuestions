class Solution {
public:
    int maxDiff(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        int res = 0, left = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > left){
                res = max(res, nums[i] - left);
            }else{
                left = nums[i];
            }
        }
        return res;
    }
};