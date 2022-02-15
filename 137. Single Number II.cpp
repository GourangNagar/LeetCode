class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int solo=0,repeat=0;
        for(auto i : nums)
        {
            solo = (solo^i) & (~repeat);
            repeat = (repeat^i) & (~solo);
        }
        return solo;        
    }
};
