class Solution {
public:
    bool validDigit(int n, int x) {
        bool hasX = false;

        while (n > 9) {
            if (n % 10 == x)
                hasX = true;
            n /= 10;
        }

        return hasX && (n != x);
    }
};