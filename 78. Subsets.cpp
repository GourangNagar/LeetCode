class Solution {
public:
    vector<vector<int>> ans;
    void sub(vector<int> &nums, int i,vector<int> v)
    {
        if(i==nums.size())
        {
            ans.push_back(v);
            return;
        }
            
        sub(nums,i+1,v);
        v.push_back(nums[i]);
        sub(nums,i+1,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v; 
        int i=0;
        sub(nums,i,v);
        return ans;
    }
};
