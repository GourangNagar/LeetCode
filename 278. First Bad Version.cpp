// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         long l = 1,m;
        while(l<=n)
        {
            m = l + (n-l) /2;
            if (isBadVersion(m))
                n=m-1;
            else
                l=m+1;
            
        }
        return l;
        
    }
};
