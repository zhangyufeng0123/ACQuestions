class Solution {
public:
    int add(int num1, int num2){
        int res = 0;
        int Cin = 0;
        int tmp = 1;
        for(int i = 0;i<32;i++){
            int a = num1 & tmp;//取得num1和num2的第i位的值
            int b = num2 & tmp;
            int S = (a^b)^Cin;//异或得到第i位的输出值
            int Cout = (a&b)|(a&Cin)|(b&Cin);//与操作得到进位
            Cin = Cout << 1;//传递到下一位的进位输入
            tmp <<= 1;
            res += S;//将第i位的输出值S加到res中
        }
        return res;
    }
};

/*
(全加器)
不能使用加减乘除，那么考虑使用位运算。最直接的是想到用全加器实现，即对于两个数字的每一位以及上一位的进位Cin，进行异或^操作得到该位的输出值S，进行与&操作得到进位Cout，再把Cout传递到下一位作为下一位的Cin。
时间复杂度分析：由于num1和num2都是int型，因此一共32位，对32位依次进行操作即可
*/