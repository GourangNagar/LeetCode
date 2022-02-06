// USING TWO POINTERS
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<2) 
            return n;
        int i = 2;
        for(int j=2;j<n;j++)
            if(nums[i-2]!=nums[j])
                nums[i++]=nums[j];   
        
        return i;
    }
};



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
