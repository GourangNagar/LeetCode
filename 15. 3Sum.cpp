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
