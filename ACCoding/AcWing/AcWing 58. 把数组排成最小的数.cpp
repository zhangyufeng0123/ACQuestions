class Solution {
public:
    static bool cmp(string a, string b){
        return a + b < b + a;
    }
    
    string printMinNumber(vector<int>& nums) {
        string res = "";
        if(nums.size() == 0)
            return res;
        vector<string> str;
        for(auto i : nums){
            str.push_back(to_string(i));//将数字转化成字符串然后压入vector数组中
        }
        sort(str.begin(), str.end(), cmp);
        for(auto i : str)
            res += i;
        return res;
    }
};