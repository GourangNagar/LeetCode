class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length() , openbrace = 0;
        string res = "";
        for(auto c : s)
        {
            
            if ( c == '(' )
                openbrace++;
            else if (c == ')')
            {
                if(openbrace ==0)
                    continue;
                openbrace--;
            }
            res += c;
        }
        
        string ans = "";
        for(int i = res.size()-1 ; i>=0 ; i--)
        {
            if(res[i] == '(' && openbrace > 0)
            {
                openbrace--;
                continue;
            }            
            ans += res[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
