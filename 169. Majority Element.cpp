class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maxele = nums[0];
        int freq=1;
        for(int i=1;i<n;i++)
        {
            if(maxele==nums[i])
                freq++;
            else
                freq--;
            
            if(freq<1)
            {
                maxele = nums[i];
                freq =1;
            }
        }
        return maxele;
    }
};
