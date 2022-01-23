class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        k=k%n;
        for(int i=0 ; i<n-k ;i++)
        {
            nums.push_back(nums[i]);
        }
            nums.erase(nums.begin(),nums.begin()+n-k);
        
    }
};




class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> v;
        k=k%nums.size();
        for( int i= nums.size()-k ;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        for( int i = 0; i<nums.size()-k;i++)
        {
            v.push_back(nums[i]);
        }
        nums=v;
    }
};



//  NOT WORKING FOR LARGE VALUES ( TLE )
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k=k%nums.size();
       for(int i=0;i<k;i++)
       {
        int temp = nums[nums.size()-1];
        nums.pop_back();
        nums.insert(nums.begin(),temp);
       }      
        
    }
};
