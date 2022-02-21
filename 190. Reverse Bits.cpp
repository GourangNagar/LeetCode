class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans;int rem;
        for (int i = 0; i < 31; i++)
        {
            rem = n%2;
            ans = rem + ans<<1;
            n=n>>1;
        }
        return ans + n%2;
    }
};
