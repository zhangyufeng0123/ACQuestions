class Solution {
public:
    bool isContinuous( vector<int> numbers ) {
        if(numbers.size() != 5) return false;
        sort(numbers.begin(), numbers.end());
        int zeros = 0, local = 0;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] == 0) zeros++;
            else {
                local = i;
                break;
            }
        }
        if(zeros >= 4)  return true;
        for(int i = local + 1; i < numbers.size(); i++){
            if(numbers[i] == numbers[i - 1])    return false;
            if(numbers[i] - numbers[i - 1] - 1 > zeros) return false;
            else    zeros -= (numbers[i] - numbers[i - 1] - 1);
        }
        return true;
    }
};