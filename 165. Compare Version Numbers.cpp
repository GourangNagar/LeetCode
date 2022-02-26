class Solution {
public:
    int compareVersion(string v1, string v2) {
        int l1 = v1.size();
        int l2 = v2.size();
        
        int n1 = 0;
        int n2 = 0;
        
        int i=0,j=0;
        
        while(i<l1 || j<l2)
        {
            while(i < l1 && v1[i] != '.')
            {
                n1 = n1*10 + v1[i]-48;
                i++;
            }
            
            while(j < l2 && v2[j] != '.')
            {
                n2 = n2*10 + v2[j]-48;
                j++;
            }
            
            if(n1>n2) 
                return 1;
            else if (n2>n1)
                return -1;
            
            i++;j++;
            n1=0;n2=0;
        }
        
        return 0;
        
    }
};
