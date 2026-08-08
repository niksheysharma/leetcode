class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& sp) {
        unordered_map<int,int> f;
        int n = pos.size();
        vector<double> t(n);
        stack<double> st;
        int fleet = 0;
        for(int i = 0;i < n;i++){
            f[pos[i]] = sp[i];
        }
        sort(pos.begin(),pos.end());
        reverse(pos.begin(),pos.end());
        for(int i = 0;i < n;i++){
            t[i] = (double)(target - pos[i])/f[pos[i]];
        }
        st.push(t[0]);
        for(int i = 1;i < n ;i++){
            if(st.top() >= t[i]){
                continue; // for when the reach at same time or combine to be a fleet
            }
            else{
                while(!st.empty() && st.top() < t[i]){
                    st.push(t[i]);
                }
            }
        }
        while(!st.empty()){
            fleet++;
            st.pop();
        }
        return fleet;
    }
};