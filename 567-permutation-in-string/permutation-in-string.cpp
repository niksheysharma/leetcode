class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> f;
        unordered_map<char,int> d;
        int end ;
        int start = 0;
        int n = s1.length();
        int m = s2.length();
        if(m < n){return false;}
        for(int i = 0;i < n;i++){
            f[s1[i]]++;
        }
        for(int i = 0;i < n;i++){
            d[s2[i]]++;
        }
        if(f ==d ){return true;}

        for(end = n;end < m;end++){
            d[s2[end]]++;
            d[s2[start]]--;
            if(d[s2[start]] == 0){
                d.erase(s2[start]);
            }
            start++;
            if(f == d){return true;}
        }
        return false;

    }
};