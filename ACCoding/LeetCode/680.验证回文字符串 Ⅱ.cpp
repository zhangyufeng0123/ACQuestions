class Solution {
public:
    bool judge(string s){
        int i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j])    break;
            i++, j--;
        }
        if(j > i)   return false;
        return true;
    }
    bool validPalindrome(string s) {
        bool res;
        if(s.size() < 3)   return true;
        int i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                if(s[i] == s[j - 1]){
                    res = judge(s.substr(i, j - i));
                    if(res) return true;
                }
                if(s[i + 1] == s[j]){
                    return judge(s.substr(i + 1, j - i));
                }
                return false;
            }
        }
        return true;
    }
};