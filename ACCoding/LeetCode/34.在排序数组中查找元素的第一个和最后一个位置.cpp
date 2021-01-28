class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        if(nums.empty())    return res;
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(nums[mid] == target) break;
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        if(right < left)    return res;
        right = (right + left) >> 1;
        left = right;
        while(left >= 0){
            if(nums[left] == target)left--;
            else break;
        }
        res[0] = left + 1;
        while(right < nums.size()){
            if(nums[right] == target)right++;
            else break;
        }
        res[1] = right - 1;
        return res;
    }
};