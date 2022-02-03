// BOUND LEFT AND RIGHT THEN FIND THE REQD. VALUE IN BETWEEN OF L AND R THEN RETURN
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        int n = arr.size();
        vector<vector<int> > vec;
        
        sort(arr.begin() , arr.end());

        if (n<3) 
            return vec;
        if (arr[0]>0) 
            return vec;

        for(int l=0;l<n-2;l++)
        {
                    
        int h=n-1;

        while(l<h)
        {
            int k = -(arr[l] + arr[h]);
            
            if(binary_search(arr.begin()+l+1, arr.begin()+ h, k))
                vec.push_back({arr[l],k,arr[h]});
 
            h--;
            while(l<h && arr[h]==arr[h+1])
                h--;     
        }
            
        while(l<n-2 && arr[l]==arr[l+1])
            l++;
        
        }
        return vec;
    }
};





// FIX A THEN FIND B AND C BETWEEN ARRAY
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        vector<vector<int> > vec;
        
        if (n<3) return vec;
        
        for(int i=0; i<n-2 && arr[i]<=0 ;i++)
        {
        if(i>0 && arr[i]==arr[i-1])
            continue;
     
        int l=i+1,h=n-1;

        while(l<h)
        {
            int sum = arr[i] + arr[l] + arr[h];
            
            if(sum == 0) 
            {
                vec.push_back({arr[i],arr[l],arr[h]});
                
                // Work on Duplicates
                while(l<h && arr[h]==arr[h-1])    h--;
                while(l<h && arr[l]==arr[l+1])    l++;

                h--;
                l++;
            }
            
            else if(sum < 0)   
                l++;
            else
                h--;
          }

        }
        return vec;
    }
};


