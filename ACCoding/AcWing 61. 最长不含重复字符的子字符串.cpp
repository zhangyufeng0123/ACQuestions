class Solution {
public:
    int longestSubstringWithoutDuplication(string s) {
        int len = s.size();
        if(!len)
            return 0;
        vector<int> str(len);
        for(int i = 0; i < len; i++){
            str[i] = int(s[i] - 'A') + 65;
        }
        int flag = 0, res = 0;
        int i = 0, j = 0;
        vector<int> num(128, 0);
        while(j < len){
            if(!flag){
                num[str[j]]++;
                j++;
                if(num[str[j - 1]] > 1){
                    flag++;
                }else{
                    res = max(res, j - i);
                }
            }else{
                num[str[i]]--;
                i++;
                if(num[str[i - 1]] == 1){
                    flag--;
                }
            }
        }
        return res;
    }
};