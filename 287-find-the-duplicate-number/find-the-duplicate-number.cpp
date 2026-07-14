class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];
        while(true)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                slow = 0;
                while(fast != slow)
                {
                    slow = nums[slow];
                    fast = nums[fast];

                }
                return slow;
            }
        }
        return -1;
    }
    
};