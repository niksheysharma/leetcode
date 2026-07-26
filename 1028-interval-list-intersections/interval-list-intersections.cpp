class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        vector<vector<int>> res;
        int n = fl.size();
        int m = sl.size();
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            int s1 = fl[i][0];
            int e1 = fl[i][1];
            int s2 = sl[j][0];
            int e2 = sl[j][1];
            if(s1 <= s2){
                if(e1 >= s2){
                    int s = max(s1,s2);
                    int e = min(e1,e2);
                    res.push_back({s,e});
                }
            }
            else{
                if(e2 >= s1){
                    int d = max(s1,s2);
                    int f = min(e1,e2);
                    res.push_back({d,f});
                }
            }
            if(e1 <= e2){
                i++;
            }
            else{
                j++;
            }
    }
    return res;
}
};