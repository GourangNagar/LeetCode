class Solution {
public:
    int romanToInt(string s) {
        map<char,int> edge = {
            {'I',1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(edge[s[i+1]] > edge[s[i]])
                sum = sum - edge[s[i]];
            else
                sum = sum + edge[s[i]];
            
        }
        return sum;
    }
};
