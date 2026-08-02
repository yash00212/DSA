class Solution {
public:
    int numberOfCuts(int n) {
      int digit = n % 2;
      if(n == 1){
        return 0;
      }else if(digit != 0){
        return n;
      } 
      return n / 2;
    }
};