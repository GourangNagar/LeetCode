class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int l1 = nums1.size(), l2 = nums2.size();
        
        if(l1 > l2)
            return findMedianSortedArrays(nums2,nums1);
        
        int low = 0 , high = l1;
               
     while(low <= high)
     {
         int cuton1 = low+(high-low)/2;
         int cuton2 = (l1+l2+1)/2 - cuton1;
         
         int l1l = (cuton1 == 0 ) ? INT_MIN : nums1[cuton1-1];
         int l1r = (cuton1 == l1) ? INT_MAX : nums1[cuton1]; 
         
         int l2l = (cuton2 == 0 ) ? INT_MIN : nums2[cuton2-1];              
         int l2r = (cuton2 == l2) ? INT_MAX : nums2[cuton2];
         
        if(l2r<l1l)
        {
            high = cuton1-1;
        }
        else if(l1r<l2l)
        {
            low = cuton1+1;
        }
        //if(l2l<=l1r && l1l<=l2r)
         else
        {
            if( (l1+l2)%2==0)
                return (max(l1l,l2l) + min(l1r,l2r))/2.0;
            else
                return (max(l1l,l2l));
        }
       
     }
        return 0.0;
    }
};
