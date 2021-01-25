class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while(1){
            if(nums[i] + nums[j] == target) break;
            if(nums[i] + nums[j] > target)  j--;
            else i++;
        }
        vector<int> res;
        res.push_back(nums[i]);
        res.push_back(nums[j]);
        return res;
    }
};