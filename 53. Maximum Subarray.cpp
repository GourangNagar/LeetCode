class Solution {
public:
    int maxSubArray(vector<int>& nums) {
             
        int sum=nums[0],maax=nums[0];
        for(int i = 1 ; i<  nums.size();i++)
        {
            sum+=nums[i];
            sum=max(sum,nums[i]);
            maax=max(sum,maax);
        }
        return maax;       
        
    }
};//best







class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        
        int pos=0;;
        for(auto x : nums)
            if(x>=0)
            pos++;
           
        if(pos!=0)
        {
            int sum=0,max=nums[0];
            for(int i = 0 ; i< n ; i++)
            {
            sum+=nums[i];
            if(sum<0)
                sum=0;
            if(sum>=max)
                max=sum;
            }
        return max;
            
        }
        else
            return *max_element(nums.begin(), nums.end());     
    }
};


/* OPTIMIZED VERSION OF ABOVE
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        
        int sum=nums[0],max=nums[0];
        for(int i = 1 ; i< n ; i++)
        {
            
            if(sum<0)
                sum=0;
            sum+=nums[i];
            if(sum>=max)
                max=sum;
        }
        return max;       
        
    }
};
*/




// TLE - Brute Force Method
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size(),max=nums[0],temp;
        for(int i = 0 ; i< n ; i++)
        for(int j = i+1 ; j<=n;j++)
            {
                temp=accumulate(nums.begin()+i,nums.begin()+j, 0);
                if(temp>=max)
                    max=temp;
            } 
        return max;       
   }
};
