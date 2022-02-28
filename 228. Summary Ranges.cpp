class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        if(nums.size()==0) return str;
        
        int s=nums[0],e=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1]+1)
            {
                e=nums[i];
            }
            else 
            {
                if (s==e)
                    str.push_back(to_string(e));
                else
                    str.push_back(to_string(s)+ "->"+ to_string(e));
                s=nums[i];
                e=nums[i];
            }
        }
        if (s==e)
            str.push_back(to_string(e));
        else
            str.push_back(to_string(s)+ "->"+ to_string(e));
        
         return str;
    }
};
