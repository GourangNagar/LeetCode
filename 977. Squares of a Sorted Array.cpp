class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i] = pow(nums[i],2);
        sort(nums.begin(),nums.end());
        return nums;
    }
};





class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size(),0);
        
        int n = nums.size() - 1;
        
        for(int l=0 , h = n , i = n; l<=h && i>=0 ; i--)
        {
            if(abs(nums[l]) < abs(nums[h]))
            {
                ans[i]=nums[h]*nums[h];
                h--;
            }
            else
            {
                ans[i]=nums[l]*nums[l];
                l++;
            }
            
        }
        return ans;
        
    }
};
