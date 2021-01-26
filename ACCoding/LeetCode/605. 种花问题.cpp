class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //if(flowerbed.size() == 1 && n == 1 && flowerbed[0] == 0)    return true;
        if(flowerbed.empty()){
            if(n)   return false;
            else return true;
        }   
        int empty = 0;
        for(; empty < flowerbed.size(); empty++){
            if(flowerbed[empty])    break;
        }
        if(empty == flowerbed.size()){
            n -= ((empty + 1) / 2);
        }else{
            n -= (empty / 2);
        }
        if(n <= 0)  return true;
        int i = empty;
        empty = 0;
        for(; i < flowerbed.size(); i++){
            if(flowerbed[i] && empty){
                n -= ((empty - 1) / 2);
                //cout << n << ' ' << empty << endl;
                empty = 0;
            }else if(flowerbed[i] == 0) empty++;
        }
        //cout << empty <<endl;
        n -= (empty / 2);
        if(n > 0)   return false;
        return true;
    }
};