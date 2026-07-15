class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int be = nums[0];
        int res = nums[0];
        int n = nums.size();
        for(int i = 1;i < n;i++){
            int v1 = nums[i];
            int v2 = be + nums[i];
            be = max(v1,v2);
            res = max(be,res);

        }
        return res;
    }
};