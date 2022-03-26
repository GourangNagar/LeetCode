class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> arr;
        int res = 0;
        for(vector<int> cost : costs){
            res += cost[0];
            arr.push_back(cost[1] - cost[0]); 
        }
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < costs.size()/2; i++){
            res += arr[i];
        }
        return res;
        
    }
};
