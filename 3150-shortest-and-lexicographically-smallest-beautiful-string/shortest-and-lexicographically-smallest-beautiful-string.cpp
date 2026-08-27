class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
    int n = s.size();
    int low = 0;
    int one = 0;
    string bs = "";
    for(int i = 0;i < n;i++){
        if(s[i] == '1'){
            one++;
        }
        while(one > k || (s[low] == '0' && low < i && one == k)){
         if(s[low] == '1'){
            one--;
         }   
         low++;
        }
    if(one == k){
        int len = i - low + 1;
        string cur = s.substr(low,len);
        if(bs == "" || 
                    cur.size() < bs.size() || 
                   (cur.size() == bs.size() && cur < bs)){
                    bs = cur;
                   }
    }

    }
    return bs;

    }
};