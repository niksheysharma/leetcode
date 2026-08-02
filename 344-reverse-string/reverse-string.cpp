class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> res;
        int n = s.size();
        stack<char> st;
        for(int i = 0; i< n; i++){
            st.push(s[i]);
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        s= res;
    }
};