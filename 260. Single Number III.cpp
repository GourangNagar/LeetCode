class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        long long res=0,a=0,b=0;
        for(auto x : nums)
            res^=x;
        for(auto x : nums)
        {
            if(x & res & ~(res-1))
                a^=x;
            else
                b^=x;
        }
        a=a^res;
        b^=res;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
