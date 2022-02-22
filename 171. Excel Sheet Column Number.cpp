class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
            sum+=pow(26,s.size()-1-i)*(s[i]-64);
        return sum;
    }
};
