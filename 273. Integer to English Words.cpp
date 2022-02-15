class Solution {
public:
    string numberToWords(int num) {
        if(num==0)	return "Zero";
        string ans;
        
        string O[10]  = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        string T[10]  = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        string SPL[10]= {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        string TH[4]  = {"","Thousand","Million","Billion"};
        
        for(int i=0;num!=0;i++)
        {
            string s;
            int ones = 0, tens = 0, hund = 0;
            ones = num%10; num=num/10; 
            tens = num%10; num=num/10;
            hund = num%10; num=num/10;
            
            if(tens==1)
                s = SPL[ones] + " " + s;
            
            else
            {
                if(ones>0)    s = O[ones] + " " + s;
                if(tens>0)    s = T[tens] + " " + s;
            }  
            if(hund>0) 
                s = O[hund] + " Hundred " + s;

            if(i>0 && s.size()>0)
                ans = s + TH[i]+ " " + ans;
            else
                ans = s + ans;
        }
        ans.pop_back();
        return ans;
    }
};
