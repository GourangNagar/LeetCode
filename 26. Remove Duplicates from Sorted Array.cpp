// TWO POINTER
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int i,c=1;
        for(i=1;i<n;i++)
            if(nums[i-1]!=nums[i])
                nums[c++]=nums[i];
       return c;    
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
             if(mp[nums[i]]==0)
             {
                 nums.push_back(nums[i]);
                 k++;
             }
            mp[nums[i]]++;
            
        }
        nums.erase(nums.begin(),nums.begin()+nums.size()-k);
        return nums.size();
    }
};
