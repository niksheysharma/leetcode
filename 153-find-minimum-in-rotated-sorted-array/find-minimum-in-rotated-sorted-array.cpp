class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        while(low < high){
            int guess = (low + high)/2;
            
            if(arr[guess] > arr[high]){
                low = guess + 1;
            }
            else{
                high = guess;
            }
        }
        return arr[high];
    }
};