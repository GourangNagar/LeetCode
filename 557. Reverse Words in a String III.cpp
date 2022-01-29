class Solution {
public:
    void word(string &s,int i,int j)
    {
        while(i<j)
            swap(s[i++],s[j--]);
    }
    string reverseWords(string s) {
        int start =0;
        for(int a=0;a<s.size();a++)
            if(s[a+1]==' ' || a==s.size()-1)
            {
                word(s,start,a);
                a++;
                start = a+1;
            }
            
        return s;
    }
};
