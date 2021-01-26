class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> letters[26];
        for(int i = 0; i < S.length(); i++){
            int tmp = int(S[i] - 'a');
            if(letters[tmp].empty())    letters[tmp].push_back(i), letters[tmp].push_back(i);   //将字母的起始位置和字母的末尾位置存入数组中
            else letters[tmp][1] = i;   //不断更新数组的末尾位置
        }
        vector<int> res;
        int tmp = int(S[0] - 'a');
        int nxt = letters[tmp][1], prev = 0;
        for(int i = 0; i < S.length(); i++){
            if(i == nxt){
                res.push_back(nxt - prev + 1);
                if(i == S.length() - 1) break;
                else{
                    prev = i + 1;
                    tmp = int(S[i + 1] - 'a');
                    nxt = letters[tmp][1];
                }
                continue;
            }
            tmp = int(S[i] - 'a');
            if(letters[tmp][1] > nxt) nxt = letters[tmp][1];
        }
        return res;
    }
};