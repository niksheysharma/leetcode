class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxed = nums[0];
        int mined = nums[0];
        int res = nums[0];
        for(int i= 1;i < n;i++){
            int v1 = nums[i];
            int v2 = maxed*nums[i];
            int v3 = mined*nums[i];
            maxed = max(v1,max(v2,v3));
            mined = min(v1,min(v2,v3));
            res = max(res,max(maxed,mined));
        }
        return res;
    }
};