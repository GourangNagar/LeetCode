class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size()-1;
    
        int j=0;
        for(int i=0 ; i <= n ; i++)
            if(nums[i]!=0)
                nums[j++]=nums[i];    

        fill(nums.begin() + j , nums.end() , 0 );
        
        for(auto x : nums)
            cout<<x;
    }
};



