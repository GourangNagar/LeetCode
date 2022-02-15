// OPTIMIZED CODE
class Solution {
public:
    int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string intToRoman(int num)
    {
       string ans = "";
       for(int i=0; num > 0; i++)
       {
           while(num >= val[i])
           {
               ans += rom[i];
               num -= val[i];
           }
       }
        return ans;
    }
};





// BRUTE FORCE
class Solution {
public:
    string str="";
    void integertoroman(int num,int i)
    {
        string s;
        if(i==0)
        {
            switch(num)
            {
                    case 1: s="I";  break;
                    case 2: s="II";  break;
                    case 3: s="III";  break;
                    case 4: s="IV";  break;
                    case 5: s="V";  break;
                    case 6: s="VI";  break;
                    case 7: s="VII";  break;
                    case 8: s="VIII";  break;
                    case 9: s="IX";  break;
            }
        }
        if(i==1)
        {
            switch(num)
            {
                    case 1: s="X";  break;
                    case 2: s="XX";  break;
                    case 3: s="XXX";  break;
                    case 4: s="XL";  break;
                    case 5: s="L";  break;
                    case 6: s="LX";  break;
                    case 7: s="LXX";  break;
                    case 8: s="LXXX";  break;
                    case 9: s="XC";  break;
            }
        }
        if(i==2)
        {
            switch(num)
            {
                    case 1: s="C";  break;
                    case 2: s="CC";  break;
                    case 3: s="CCC";  break;
                    case 4: s="CD";  break;
                    case 5: s="D";  break;
                    case 6: s="DC";  break;
                    case 7: s="DCC";  break;
                    case 8: s="DCCC";  break;
                    case 9: s="CM";  break;
            }
        }
        if(i==3)
        {
            switch(num)
            {
                    case 1: s="M";  break;
                    case 2: s="MM";  break;
                    case 3: s="MMM";  break;
            }
        }
        
        str.insert(0,s);
   
    }
    string intToRoman(int num) {
        int rem=0,pos=0;
        while(num)
        {
            rem=num%10;
            num/=10;
            integertoroman(rem,pos);
            pos++;
        }
    return str;
    }
};
