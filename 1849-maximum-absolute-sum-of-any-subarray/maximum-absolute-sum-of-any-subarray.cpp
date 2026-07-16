int maxc(vector<int> &a){
    int res = a[0];
    int n = a.size();
    int mx = a[0];
    int be = a[0];
    for(int i = 1;i < n;i++){
        int v1 = be + a[i];
        int v2 = a[i];
        be = max(v1,v2);
        res = max(res,be);
    }
    return res;
}
int manc(vector<int> &a){
    int res = a[0];
    int n = a.size();
    int mx = a[0];
    int be = a[0];
    for(int i = 1;i < n;i++){
        int v1 = be + a[i];
        int v2 = a[i];
        be = min(v1,v2);
        res = min(res,be);
    }
    return abs(res);
}


class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int v1 = maxc(nums);
        int v2 = manc(nums);
        if(v1 > v2) return v1;
        else return v2;
    }
};