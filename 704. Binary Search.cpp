class Solution {
public:
    int search(vector<int>& arr, int x) {
        int l=0 , h = arr.size()-1;
        while(l<=h)
        {
            int mid = l + h-1 /2;
            
            if(arr[mid] == x)
                return mid;
            else if (arr[mid] < x)
                l=mid+1;                
            else
                h = mid-1;
            
        }
        return-1;
        
    }
};
