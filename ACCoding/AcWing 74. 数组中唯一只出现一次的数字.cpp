class Solution {
public:
    int findNumberAppearingOnce(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i += 3){
            if(nums[i] != nums[i + 1])
                return nums[i];
        }
        return nums.back();
    }
};