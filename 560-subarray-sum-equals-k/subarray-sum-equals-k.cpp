class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum =0;
        int n = a.size();
        unordered_map<int,int> f;
        int fr;
        f[0]++;
        int res =0;
        for(int i = 0;i < n;i++){
            sum += a[i];
            int cu = sum -k;
            int fr = f[cu];
            res += fr;
            f[sum]++;
        }
        return res;
    }
};