class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        vector<int> res(n);
        stack<int> st;
        for(int i = 2*n - 1;i >=0 ;i--){
            int idx = i%n;
            while(!st.empty() && st.top() <= a[idx]){
                st.pop();
            }
            if(i < n){
                if(st.empty()){
                    res[idx] = -1;
                }
                else{
                    res[idx] = st.top();
                }
            }
            st.push(a[idx]);
        }
        return res;
    }
};