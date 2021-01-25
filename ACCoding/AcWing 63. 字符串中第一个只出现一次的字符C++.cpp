class Solution {
public:
    char firstNotRepeatingChar(string s) {
        vector<int> flag(128, 0);
        vector<char> str;
        int len = s.size();
        for(int i = 0; i < len; i++){
            int tmp = int(s[i] - 'A') + 65;
            if(flag[tmp]){
                flag[tmp]++;
                if(flag[tmp] > 2)
                    continue;
                for(int j = 0; j < str.size(); j++){
                    if(str[j] == s[i]){
                        str.erase(str.begin() + j);
                        break;
                    }
                }
            }else{
                flag[tmp]++;
                str.push_back(s[i]);
            }
        }
        if(str.size() == 0){
            return '#';
        }
        return str[0];
    }
};