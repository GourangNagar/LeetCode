class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i = 0 ; i < accounts.size() ; i++)
        {
            int sum=0;
            for( int j = 0 ; j < accounts[i].size() ; j++)
                sum+=accounts[i][j];

            if(sum>max)
                max=sum;
        }
        return max;
    }
};





class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = 0;
        for(auto customer: accounts)
            m = max(m, accumulate(customer.begin(), customer.end(), 0));

        return m;
    }
};
