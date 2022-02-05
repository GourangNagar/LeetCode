class Solution {
public:
    int mySqrt(int x) {
        
        long long l=0,h=x,m,ans;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(m*m==x)
                return m;
            else if(m*m<x)
            {
                l=m+1;
                ans = m;
            }
            else
                h=m-1;
        }
            
     return ans;  
    }
};
