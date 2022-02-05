class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i,word=0;
        for( i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
                word++;
            if(s[i]==' ' && word!=0)
                break; 
        }
        return word;
    }
};
