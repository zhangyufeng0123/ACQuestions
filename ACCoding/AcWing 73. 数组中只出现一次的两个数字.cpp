class Solution {
public:
    vector<int> findNumsAppearOnce(vector<int>& nums) {
        vector<int> res;
        if(nums.size() == 0)    return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1])  i++;
            else res.push_back(nums[i]);
        }
        if(res.size() < 2)  res.push_back(nums[nums.size() - 1]);
        return res;
    }
};