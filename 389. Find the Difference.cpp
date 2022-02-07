class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0) return t[t.size()-1];
        char ans=0;
        for(int i=0;i<s.size();i++)
            ans ^= s[i];
        for(int i=0;i<t.size();i++)
            ans ^= t[i];
                
        return ans;
    }
};
