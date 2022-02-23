class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        if(len == 0) return 0;
        int i=0;
        while(s[i]==' ' && i<len)
            i++;
        
        bool pos = true;
        if(s[i] == '-') 
        {
            pos = false;
            i++;
        }
        else if(s[i] == '+')
            i++;
        int ans=0;
        while(i<len && isdigit(s[i]))
        {
            if(ans > (INT_MAX / 10) || (ans == (INT_MAX / 10) && (s[i]-48) > 7))
                return pos ? INT_MAX : INT_MIN;
                
            ans = ans*10 + (s[i]-48);
            
            i++;
        }
        return pos ? ans : -ans;
        
    }
};
