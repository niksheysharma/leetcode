class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<int> st;
        vector<int> ans(n,0);
        ans[n - 1] = 0;
        st.push(n - 1);
        for(int i = n - 2; i >= 0;i--){
            int count = 0;
            while(!st.empty() && t[st.top()] <= t[i]){
                st.pop();
            }
            if(!st.empty() && t[st.top()] > t[i]){
                count = st.top() - i;
            }
            st.push(i);
            ans[i] = count;
        }
        return ans;
    }
};