class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        int val = 0;
        bool odd = false;
        for(int i = 0;i < s.size();i++){
            f[s[i]]++;
        }
        for(auto i: f){
            char c = i.first;
            int p = i.second;
            
            if(p%2 == 0){
                val += p;
            }
            else{
                odd = true;
            }
        }
        if(odd == false){
                return val;
            }
        for(auto i : f){
            int o = i.second;
            if(o%2 == 1){
                val += o - 1;
            }
        }
        return val + 1;
    }
};