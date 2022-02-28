class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1;
        int area=0;
        while(i!=j)
        {
            area=max(area, min(nums[i],nums[j])*(j-i));
            if(nums[i]<nums[j]) i++;
            else j--;
                
        }
        return area;      
    }
};
