class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        
         while (l <= r) 
         {
            int mid = l + (r-l)/ 2;
             
            if (nums[mid] == target) 
                return mid;
            
            if (nums[mid] >= nums[l])
            if (target > nums[mid] || target < nums[l])
                l = mid + 1;
            else 
                r = mid - 1;
                 
            else 
            if (target < nums[mid] || target > nums[r])
                r = mid - 1;
            else     
                l = mid + 1;
            
        }
        return -1;
    }
};







class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        
        while(l<h)
        {
            int m = l + (h - l)/2 ;
            if(target == nums[m])
                return m;
            else if(nums[l] <= nums[m] )
            {
                if(nums[l]<= target && nums[m]>= target)
                h=m-1;
                else
                l=m+1;

            }
            else
            {
                if(nums[h]>= target && nums[m]<= target)
                l=m+1;
                else
                h=m-1;

            }

        }     
        return nums[l] == target ? l : -1;
    }
};
