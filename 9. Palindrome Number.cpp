class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int num = x;
        int rev = 0;
        
        while(num)
        { 
            int last = num % 10;
            num = num/10;
            if ((INT_MAX - last) / 10 < rev) return false;
            rev = rev*10 + last;
        }
        return rev == x;
    }
};
