class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        for (int i=1;i<=n ;i++)
        {
            res[i] = res[i & i-1] + 1 ; 
        }
        return res;
        
    }
};




class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
    
        for (int i=0;i<=n ;i++)
        {
            int rem = 0;
            int num =i;
            while(num!=0)
            {
                rem+=(num%2);
                num/=2;
            }
            res.push_back(rem);    
        }
        return res;
        
    }
};
