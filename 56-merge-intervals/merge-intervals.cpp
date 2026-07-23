class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), [](vector<int>& x, vector<int>& y){
            return x[0] < y[0];
        });

        vector<vector<int>> f;
        int s_1 = a[0][0];
        int e_1 = a[0][1];
        int n = a.size();
        for(int i = 1; i < n; i++){
            int s_2 = a[i][0];
            int e_2 = a[i][1];
            if(e_1 >= s_2){
                if(s_2 < s_1){
                    s_1 = s_2;
                }
                e_1 = max(e_1, e_2);
                continue;
            }
            f.push_back({s_1, e_1});
            s_1 = s_2;
            e_1 = e_2;
        }
        f.push_back({s_1, e_1});
        return f;
    }
};
