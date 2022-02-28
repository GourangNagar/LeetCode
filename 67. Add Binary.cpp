class Solution {
public:
    string addBinary(string a, string b) {
        string str;
        int i= a.size() - 1, j = b.size()-1;
        int carry = 0;
        while(i>=0 || j>=0)
        {
            int sum = carry;
            if(i>=0) sum += a[i--] - '0';
            if(j>=0) sum += b[j--] - '0';
            
            carry = sum > 1 ? 1 : 0;
            str += to_string(sum%2);
        }
        if(carry) str+= to_string(carry);
        reverse(str.begin(),str.end());
        return str;
    }
};
