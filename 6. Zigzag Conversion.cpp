class Solution {
public:
    string convert(string s, int n) {
        if (n == 1)
            return s;
        
        string r;
        for (int i = 0; i < n; ++i) 
        {
            int step = (2*n-2) - (2*i);
            for(int j = i ; j < s.length(); )
            {
                if (step != 0) 
                {
                    r += s[j];
                    j += step;
                }
                step = (2*n - 2) - step;
            }
        }
        return r;
    }
};
