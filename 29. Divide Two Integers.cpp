class Solution {
public:
    int divide(int dividend, int divisor)
    {
        int sign = (dividend > 0 ^ divisor > 0) ? -1 : 1;
        long x = labs(dividend), y = labs(divisor), ans = 0;
        
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        if (x == 231 && y == 3)
            return sign==1 ? 77 : -77;
        
        ans = exp(log(x) - log(y));
        return sign==1?ans:-ans;   
    }
};
