//  A + B + C + D = 0
//  A + B = -( C + D )
class Solution {
public:
    int fourSumCount(vector<int>& num1, vector<int>& num2, vector<int>& num3, vector<int>& num4) {
        unordered_map<int,int> Mp;
        int cnt=0;
        
        for(int i : num1)
            for(int j : num2)
                Mp[i+j]++;

        for(int k : num3)
            for(int l : num4)
                cnt +=Mp[-k-l];
        
        return cnt;
    }
};
