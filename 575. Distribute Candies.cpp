class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(auto x : candyType)
        {
            s.insert(x);
        }
        return min(candyType.size()/2 , s.size());
        
    }
};
