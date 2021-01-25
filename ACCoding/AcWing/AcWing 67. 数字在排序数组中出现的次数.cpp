class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int left = -1, right = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == k && left == -1){
                left = i, right = i;
            }else if(nums[i] == k && left != -1){
                right = i;
            }
        }
        if(left != -1){
            return right - left + 1;
        }else   return 0;
    }
};