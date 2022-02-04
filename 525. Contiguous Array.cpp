class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int maxlen=0;;
        int count=0;
        
        unordered_map<int,int> mp;
        mp[0]=-1; // mark all 0s = -1s
        
        for(int i=0;i<n;i++)
        {
           /*
           if(nums[i]==1)
                count++;
            else
                count--;
            */
            count += (nums[i]==1) ? 1 : -1;
  
            if(mp.find(count)!=mp.end()) // if value present
                maxlen = max(maxlen,i - mp[count]);
            else // else input
                mp[count]=i;
          
        }   
        return maxlen;
    }
};
