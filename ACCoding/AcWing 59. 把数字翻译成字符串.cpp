class Solution {
public:
    void dfs(string s, int &res, int local){
        if(local == s.size()){  //判断位置是否到达末尾，即一种方法
            res++;
            return;
        }
        if(local < s.size()){   //判断local的大小，如果小于s的长度，则可以直接到达下一位，因为每一个个位数都有对应的字母
            dfs(s, res, local + 1);
        }
        if(local < s.size() - 1){   //这里是要截取两位数
            int tmp = int(s[local] - '0');
            if(tmp == 1 || tmp == 2){   //要截取的两位数肯定是10+ 或者 20+， 所以十进制只能是1或2， 如果是0的话就是个位数
                //cout << local << endl;
                tmp = tmp * 10 + int(s[local + 1] - '0');
                if(tmp <= 25)
                    dfs(s, res, local + 2);
            }
        }
    }

    int getTranslationCount(string s) {
        int res = 0;
        dfs(s, res, 0);
        return res;
    }
};