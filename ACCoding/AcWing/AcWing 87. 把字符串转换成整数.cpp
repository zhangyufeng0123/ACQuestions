class Solution {
public:
    int strToInt(string str) {
        long long res = 0;
        int flag = 0;
        int INF = pow(2, 31) - 1;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' ')   continue;
            if((str[i] == '+' || str[i] == '-') && (flag == 0)){
                if(str[i] == '+')   flag = 1;
                else flag = -1;
            }else if(str[i] >= '0' && str[i] <= '9'){
                if(flag == 0)   flag = 1;
                res = res * 10 + int(str[i] - '0');
            }else{
                return res * flag;
            }
            if(res > INF && flag == 1){
                return INT_MAX;
            }else if(res > INF && flag == -1){
                return INT_MIN;
            }
        }
        return res * flag;
    }
};