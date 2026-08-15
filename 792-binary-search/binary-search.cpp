class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = (low + high)/2;
        while(low <= high){
            mid = (low + high)/2;
            if(nums[mid] > target){
                high = mid - 1;
                continue;
            }
            else if(nums[mid] < target){
                low = mid + 1;
                continue;
            }
            else{
                return mid;
            }
        }
        return - 1;
    }
};