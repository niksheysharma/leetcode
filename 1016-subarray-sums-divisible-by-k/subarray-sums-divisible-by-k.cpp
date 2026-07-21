class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        unordered_map<int,int> f;
        int res =0;
        int n = a.size();
        f[0] =1;
        int rem;
        int sum=0;
        for(int i =0;i < n;i++){
            sum  += a[i];
            rem = sum %k;
            if(rem < 0){
                rem = rem + k;
            }
            res += f[rem];
            f[rem]++;
        }
        return res;
    }
};