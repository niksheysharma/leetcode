class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int be = a[0];
        int res = a[0];
        int n =a.size();
        for(int i = 1;i < n;i++){
            int v1 = be + a[i];
            int v2 = a[i];
            be = min(v1,v2);
            res = min(res,be);
        }
        return res;
        
    }
};
