class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n= nums.size(),c=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        int count=0;
        if(k==0)
        {
            for(auto x : mp)
                if(x.second > 1)
                    count++;
        }
        else
        {
            for(auto x : mp)
                if(mp.count(x.first - k))
                    count++;
        }
        return count;
    }
};
