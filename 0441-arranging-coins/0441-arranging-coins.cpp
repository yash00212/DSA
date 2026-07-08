class Solution {
public:
    int arrangeCoins(int n) {
        long long x = (long long)n;
        return (sqrt(8*(x+1))-1)/2;
    }
};