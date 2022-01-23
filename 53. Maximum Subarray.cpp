



// TLE - Brute Force Method
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size(),max=nums[0],temp;
        for(int i = 0 ; i< n ; i++)
        for(int j = i+1 ; j<=n;j++)
            {
                temp=accumulate(nums.begin()+i,nums.begin()+j, 0);
                if(temp>=max)
                    max=temp;
            } 
        return max;       
   }
};
