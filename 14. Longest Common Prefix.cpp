class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string lcp = str[0];
        for(int i = 1 ; i < str.size() ; i++)
        {            
        string words = str[i];            
        lcp = lcp.substr(0 , min(lcp.size() , words.size())); 
        for(int k = 0 ; k < words.size() && k < lcp.size() ; k++)
          if(lcp [k] != words [k] )
            lcp=lcp.substr(0,k);
        } 
        return lcp;
    }
};
