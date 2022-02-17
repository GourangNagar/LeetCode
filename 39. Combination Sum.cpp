class Solution {
public:
    
    vector<vector<int>> res;
    vector<int> r;        

    void Sum(vector<int>& candidates, int target, int i)
    {
        
        if(target == 0)
        {
            res.push_back(r);
            return;
        }
         if(i==candidates.size() || target<0)
             return;        
        while( i <  candidates.size() && target - candidates[i] >= 0)
        { 
            r.push_back(candidates[i]);
            Sum(candidates,target - candidates[i],i);
            ++i;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        Sum(candidates,target,0);
        
        return res;
    }
};
