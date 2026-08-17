class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int res = -1;
        int low = 0;
        int high = arr.size() - 1;
        while(low <= high){
            int guess = (low + high)/2;
            if(arr[guess] < x){
                low = guess + 1;
            }
            else{
                res = guess;
                high = guess - 1;
            }
        }
        return res;
        
        
    }
};