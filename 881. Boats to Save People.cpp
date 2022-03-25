class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int boat=0;
        sort(nums.rbegin(), nums.rend());
        for(int i=0 , j=nums.size()-1 ; i<=j ; i++)
        {
            if(nums[i]+nums[j]<=limit)
                    j--;
            boat++;
        }
        return boat;      
    }
};
