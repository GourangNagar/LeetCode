class Solution {
public:
    
    bool isSubs(string& s, string& t, int n, int m)
    {
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++) dp[i][0]=0;
        for(int i=0;i<=m;i++) dp[0][i]=0;
        
        
        if(n == 0)          return true;
        if(m == 0)          return false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if (s[i - 1] == t[j - 1])
                    dp[i][j] = 1+ dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        if(dp[n][m]==min(s.size(),t.size())) return true;
        return false;
        
    }
    
    
    bool isSubsequence(string s, string t) {
        
       return isSubs(s,t,s.length(),t.length());
        
    }
};
