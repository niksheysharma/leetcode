long long fun(vector<int> &a,int n, int speed){
    long long h = 0;
    for(int i =0;i < n;i++){
        h = h + a[i]/speed;
        if(a[i]%speed != 0){
            h++;
        }
    }
    return h;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int q = -1;
        int n = piles.size();
        int res = -1;
        for(int i =0;i < n;i++){
            if(piles[i] >  q){
                q = piles[i];
            }
        }
        int high = q;
        while(low<=high){
            int guess = (low + high)/2;
            long long hr = fun(piles,n,guess);
            if(hr > h){
                low = guess +1;
            }
            else{
                res = guess;
                high = guess -1;
            }
        }
        return res;
    }
};