// APPROACH 1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==1) return 1;
        unordered_map<char,int> mp;
        int count=0,ans=0;
        for(int i=0;i<s.size();i++)
        {            
            if(mp.find(s[i]) != mp.end() && mp[s[i]]>=count)
                count=mp[s[i]]+1;
   
            mp[s[i]]=i;
            ans=max(ans,i-count+1);
        }
        return ans;
    }
};




// APPROACH 2
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==1) return 1;
        unordered_map<char,int> mp;
        int l=0,r=0;
        int sum=0;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                l++;
            }
            r++;
            
            sum = max(sum,r-l);
        }
        return sum;
    }
};
