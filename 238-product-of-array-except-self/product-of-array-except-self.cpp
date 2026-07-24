class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> pre(n);
        vector<int> suf(n);
        
        int left = 1;
        for(int i = 0; i < n; i++){
            pre[i] = left;
            left = left * a[i];
        }
        
        int right = 1;
        for(int i = n - 1; i > -1; i--){
            suf[i] = right;
            right = right * a[i];
        }
        
        for(int i = 0; i < n; i++){
            a[i] = pre[i] * suf[i];
        }
        return a;
    }
};