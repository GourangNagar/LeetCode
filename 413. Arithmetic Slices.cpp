class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int j=0,count=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                 count+=(i-j+1)-2;
            else j=i-1;
        }
        return count;
    }
};







//RECURSION
class Solution {
public:
    int solve(vector<int> &arr,int n,int count)
    {
        if(n<3)
            return 0;
        if(arr[n-1]+arr[n-3]==2*arr[n-2])
            return 1 + count + solve(arr , n-1,++count);    
        else
            return solve(arr,n-1,0);
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        return solve(nums,nums.size(),0);
    }
};




// DP
class Solution {
public:
    int dp[5001][1001];
    
    int solve(vector<int> &arr,int n,int m)
    {
        if(n<3)
            return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        
        
        if(arr[n-1]+arr[n-3]==2*arr[n-2])
            return dp[n][m] = 1+m+solve(arr,n-1,m+1);
            
        else
            return dp[n][m] = solve(arr,n-1,0);
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,nums.size(),0);
    }
};
