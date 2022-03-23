class Solution {
public:
    int brokenCalc(int val, int target) {
        if(val >= target)
            return val-target;
        if(target%2==0)
            return 1 + brokenCalc(val,target/2);
        else
            return 1 + brokenCalc(val,target+1);
        
    }
};
