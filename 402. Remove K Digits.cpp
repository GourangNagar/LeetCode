// FOR OPTIMAL SPACE COMPLEXITY
class Solution {
public:
    string removeKdigits(string num, int k) {
        int i,j;
        for(i=0;i<k;i++)
            for(j=0;j<num.size();j++)
                if(num[j]>num[j+1])
                {
                    num.erase(num.begin()+j ,num.begin()+j+1);
                    break;
                }
        
        for(i=0;num[i]=='0';i++);
        num.erase(num.begin(),num.begin()+i);
            
        if(num.empty()) return "0";
        return num;
    }
};









// FOR OPTIMAL TIME COMPLEXITY
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() <= k)  return "0";
        if(k == 0)  return num;
        
        string res = "";
        stack <char> s;
        
        s.push(num[0]);
        
        for(int i = 1; i<num.size(); ++i)
        {
            while(k > 0 && !s.empty() && num[i] < s.top())
            {
                --k;
                s.pop();
            }
            
            s.push(num[i]);
            
            if(s.size() == 1 && num[i] == '0')
                s.pop();
        }
        
        while(k && !s.empty())
        {
            --k;
            s.pop();
        }
        
        while(!s.empty())
        {
            res.push_back(s.top()); 
            s.pop();
        }
        
        reverse(res.begin(),res.end());
        
        if(res.length() == 0) return "0";
        
        return res;   
    }
};
