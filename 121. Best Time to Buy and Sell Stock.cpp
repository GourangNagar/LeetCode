class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minn = prices[0];
        int maxprof = 0;
        
        for(int i = 0 ; i < n ; i++ )
        {
            minn = min(minn,prices[i]);
            int profit = prices[i]-minn;
            maxprof = max(maxprof,profit);
        }
        return maxprof;
    }
};
// BRUTE FORCE KINDA
