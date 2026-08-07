class Solution {
public:
    int countCollisions(string s) {
        stack<char> st;
        int count = 0;
        int n = s.size();
        for(int i = 0;i < n;i++){
            char c = s[i];
            if(c == 'R'){
                st.push(c); // if R no car will collide 
            }
            else if( c == 'S'){
                while(!st.empty() && st.top() == 'R'){
                    st.pop();
                    count++;
                }
                st.push('S');
            }
            else{
                // for L
                bool collied = false;
                while(!st.empty() && st.top() == 'R'){
                        st.pop();
                        count++;
                        collied = true;
                }
                if(!st.empty() && st.top() == 'S'){
                    collied = true;

                }
                if(collied){
                    count++;
                    st.push('S');
                }
                else{
                    st.push('L');
                }
            }
        }
        return count;
    }
};