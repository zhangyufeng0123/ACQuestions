/*
埃拉托色尼筛选法
素数筛选，判断小于MAXN的数是不是素数
notprime是一张表，false表示是素数，true表示不是素数
*/

const int MAXN = 100010;    //可编辑
bool notprime[MAXN];
void init(){
    memset(notprime, false, sizeof(notprime));
    notprime[0] = notprime[1] = true;
    for(int i = 2; i < MAXN; i++){
        if(!notprime[i]){
            if(i > MAXN / i)    continue;   //防止后面i*i溢出（或者i，j用long long）
            //直接从i*i开始就可以，小于i倍的已经筛选过了，注意是j += i
            for(int j = i * i; j < MAXN; j++){
                notprime[j] = true;
            }
        }
    }
}