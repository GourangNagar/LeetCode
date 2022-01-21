class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int l=0 , h = nums.size()-1;
    while(l<=h)
        {
            int summ = nums[l] + nums[h];
            if(summ == target)
                return {l+1 , h+1};
            else if (summ < target)
                l++;                
            else
                h--; 
        }     
    return {};
    }  
};
