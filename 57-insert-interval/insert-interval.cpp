vector<vector<int>> fix(vector<vector<int>> &a){
    vector<vector<int>> res;
    if(a.empty()) return res;
    int s1 = a[0][0];
    int e1 = a[0][1];
    int n = a.size();
    
    for(int i = 0;i < n;i++){
        int s2 = a[i][0];
        int e2 = a[i][1];
        if(e1 >= s2){
            e1 = max(e1,e2);
            continue;
        }
        else{
            res.push_back({s1,e1});
            s1 = s2;
            e1 = e2;
        }
    }
    res.push_back({s1,e1});
    return res;
}
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size();
        bool insert = false;
        for(int i = 0;i < n;i++){
            int start = intervals[i][0];
            if(insert == false && start > newInterval[0]){
                res.push_back(newInterval);
                insert = true;
            }

            
            res.push_back(intervals[i]);
        }
        if(!insert){
            res.push_back(newInterval);
        }
        vector<vector<int>> r;
        r = fix(res);
        return r;

    }
    
};