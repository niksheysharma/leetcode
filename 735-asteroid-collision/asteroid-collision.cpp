class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        stack<int> st;
        st.push(a[0]);
        for(int i = 1;i < n;i++){
            bool distroy = false;
            while(!st.empty() && st.top() > 0 && a[i] < 0){
                if(abs(st.top()) == abs(a[i])){
                    distroy = true;
                    st.pop();
                    break;
                }
                else if(abs(st.top()) > abs(a[i])){
                    distroy = true;
                    break;
                }
                else{
                    st.pop();
                }
            }
            if(!distroy) st.push(a[i]);

        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
};