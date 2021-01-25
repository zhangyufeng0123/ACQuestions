class Solution {
public:
    int lastRemaining(int n, int m){
        vector<int> nums;
        for(int i = 0; i < n; i++){
            nums.push_back(i);
        }
        int k = 0;
        while(nums.size() > 1){
            k += m;
            k--;
            k %= nums.size();
            nums.erase(nums.begin() + k);
        }
        return nums[0];
    }
};