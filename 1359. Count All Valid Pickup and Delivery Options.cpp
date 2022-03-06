class Solution {
public:
    long mod = 1000000007;
    int countOrders(int n) {
        if(n == 0) 
            return 1;
        long ans = n*(2*n-1) % mod;
        ans = ans * countOrders(n-1) % mod;
        return ans % mod;
    }
};
