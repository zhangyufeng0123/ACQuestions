const int Mod = 1e9 + 7;

int QuickMod(int a, int b){ //求a^b次幂
    int res = 1;
    while(b){
        if(b & 1)   res = res * a % Mod;
        b >>= 1;
        a = a * a % Mod;
    }
    return res;
}