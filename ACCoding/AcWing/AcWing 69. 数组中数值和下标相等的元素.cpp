class Solution {
public:
    int getNumberSameAsIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i == nums[i])
                return i;
        }
        return -1;
    }
};