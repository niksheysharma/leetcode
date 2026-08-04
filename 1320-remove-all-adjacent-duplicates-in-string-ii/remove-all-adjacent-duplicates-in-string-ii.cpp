class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string res;
        int n = s.size();
        for(int i = 0; i < n;i++){
            char c = s[i];
            if(st.empty()){
                st.push({c,1});
                continue;
            }
            if(st.top().first != c){
                st.push({c,1});
                continue;
            }
            if(st.top().second < k - 1){
                pair<char,int> p = st.top();
                st.pop();
                st.push({p.first,++p.second});
                continue;
            }
            st.pop();
        }
        while(!st.empty()){
            pair<char,int> o = st.top();
            st.pop();
            while(o.second--){
                res.push_back(o.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;

        }
    
};