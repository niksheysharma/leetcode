bool fun(vector<int> &a,int k,int guess){
    int  cow=1;
    int prepos = a[0];
    int n = a.size();
    for(int i=1;i < n ;i++){
        int dist = a[i] - prepos;
        if(dist< guess){
            continue;
        }
        cow++;
        prepos = a[i];
    }
    if(cow >= k){
        return true;
    }
    else{
        return false;
    }
}
class Solution {
public:
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int low = 1;
        int n = pos.size();
        int high = pos[n - 1] - pos[0];
        int res = -1;
        while(low <= high){
            int guess = (low+high)/2;
            if(fun(pos,m,guess)){
                res = guess;
                low = guess + 1;
            }
            else{
                high = guess - 1;
            }
        }
        return res;
        
    }
};