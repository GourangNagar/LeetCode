class Solution {
public:
    vector<string> letterCombinations(string digits){
        vector<string> res{""};
        if(digits=="") 
            return {};

        map<int, string> mp{
            {2,"abc"},{3,"def"},{4,"ghi"},
            {5,"jkl"},{6,"mno"},{7,"pqrs"},
            {8,"tuv"},{9,"wxyz"}
        };
        for(auto x : digits)
        {
            vector<string> temp;
            for(auto y : res)
            {
                for(char z : mp[x-48])
                    temp.push_back(y+z);
            }
            res=temp;
        }
         return res;   

    }
};
