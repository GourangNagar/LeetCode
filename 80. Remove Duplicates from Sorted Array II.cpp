// USING 


// USING MAP
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
             if(mp[nums[i]]<2)
                 nums[k++]=nums[i];
            mp[nums[i]]++;
        }
        nums.erase(nums.begin()+k,nums.end());
        return nums.size();
    }
};
