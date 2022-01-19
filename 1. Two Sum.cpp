class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0 ; i < n-1 ; i++)
            for(int j = i +1 ; j < n ; j++ )
                if(nums[i] + nums[j] == target)
                    return {i , j};
                    
            return {};
    }
};




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i = 0 ; i < n ; ++i)
            if(map.find(target-nums[i]) == map.end())
                map[nums[i]]=i;
            else
                return {map[target - nums[i]] , i};
        return {};          
    }
};
