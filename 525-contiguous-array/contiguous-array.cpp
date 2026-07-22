class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int n = a.size();
        int res = 0;
        int z =0;
        unordered_map<int,int>f;
        int o =0;
        for(int i = 0;i < n;i++){
            if(a[i] == 0){
                z++;
            }
            else{
                o++;
            }
            int d = z -o;
            if(d == 0){
                res = max(res,i + 1);
                continue;
            }
            if(f.find(d) == f.end()){
                f[d] = i;
            }
            else{
                int inx = f[d];
                int len = i - inx;
                res = max(res,len);
            }

        }
        return res;
        }
};