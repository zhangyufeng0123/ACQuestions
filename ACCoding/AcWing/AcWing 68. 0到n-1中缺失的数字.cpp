class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};