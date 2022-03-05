class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 100001;
        vector<int> freq(100001,0);
        for(auto x : nums)
            freq[x]++;
        
        int dp[100001];
        
        dp[1]=max(dp[0],freq[1]);
        for (int i=2;i<100001;i++)
        {
            dp[i]=max(freq[i]*i+dp[i-2] , dp[i-1]);
        }
        return dp[100000];
        
        
    }
};
