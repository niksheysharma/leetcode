class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n =  a.size();
        int sum = 0;
        for(int j =0 ;j < n;j++){
            sum += a[j];
        }
        int left =0;
        int right;
        for(int i = 0;i < n;i++){
            if(i > 0){
                left += a[i -1];
            }
            right = sum -left -a[i];
            if(left == right){
                return i;
            }
        }
        return -1;
    }
};