class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int res;
        while(low < high){
            int guess = (low + high)/2;
            if(nums[guess] > nums[high]){
                low = guess + 1;
            }
            else{
                res = nums[guess];
                high = guess;
            }
        }
        res = low;
           int l_1, h_1;
        if(target >= nums[res] && target <= nums[nums.size() - 1]){
            l_1 = res;
            h_1 = nums.size() - 1;
        }
        else{
            l_1 = 0;
            h_1 = res - 1;
        }

        while(l_1 <= h_1){
            int gue = (l_1 + h_1) / 2;
            if(nums[gue] == target){
                return gue;
            }
            else if(nums[gue] < target){
                l_1 = gue + 1;
            }
            else{
                h_1 = gue - 1;
            }
        }
        return -1;
    }
}; 