class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    bool temp = false;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++)
        if(nums[i]==nums[i+1])
        {
            temp = true;
            break;
        }
        return temp;        
    }
};




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;
        
    unordered_map<int,int> :: iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++)
    {
        if(itr->second > 1)
        return true;
    }
        return false;
        
    }
};





class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;
        
    for(auto itr : freq)
    {
        if(itr.second > 1)
        return true;
    }
        return false;
        
    }
};
