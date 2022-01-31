class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                st.push(s[i]);
            
            else
            {
                if(st.empty())
                    return false;
                
                char rev = st.top();
                st.pop();
                if(!((s[i]=='}' && rev =='{') || (s[i]==']' && rev =='[') || (s[i]==')' && rev =='(')))
                     return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;       
    }
};
