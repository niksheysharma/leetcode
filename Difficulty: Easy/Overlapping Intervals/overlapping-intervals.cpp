class Solution {
  public:
    bool isIntersect(vector<vector<int>> a) {
        // Code Here
        int n = a.size();
        sort(a.begin(),a.end());
        int s1 = a[0][0];
        int e1 = a[0][1];
        for(int i = 1;i < n;i++){
            int s2 = a[i][0];
            int e2 = a[i][1];
            if(e1 >= s2){
                return true;
            }
            s1 = s1;
            e1 = max(e1,e2);
        }
        return false;
    }
};