class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n,'a');
         for (k -= n; k > 0; k -= 25) 
            res[--n] += min(k,25);
        return res;
    }
};
