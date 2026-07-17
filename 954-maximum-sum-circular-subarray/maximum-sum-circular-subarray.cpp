int maxc(vector<int> &a){
    int n = a.size();
    int res = a[0];
    int be = a[0];
    for(int i = 1;i < n;i++){
            int v1 = be + a[i];
            int v2 = a[i];
            be = max(v1,v2);
            res = max(res,be);
        }
        return res;
    
}
int minc(vector<int> &a){
    int n = a.size();
    int res = a[0];
    int be = a[0];
    for(int i = 1;i < n;i++){
            int v1 = be + a[i];
            int v2 = a[i];
            be = min(v1,v2);
            res = min(res,be);
        }
        return res;
    
}
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum =0;
        int res = nums[0];
        int n = nums.size();
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        int v1 = maxc(nums);
        int v2 = minc(nums);
        if(v1 < 0) return v1;
        res = max(res,max(v1,sum - v2));
        return res;
    }
};