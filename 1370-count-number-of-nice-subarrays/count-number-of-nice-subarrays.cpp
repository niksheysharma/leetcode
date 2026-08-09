class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        int n = a.size();
        for(int i = 0; i< n;i++){
            if(a[i]%2 == 0){
                a[i] = 0;
            }
            else{
                a[i] = 1;
            }
        }
        int sum = 0;
        int count = 0;
        int low = 0;
        int high = 1;
        while(high <= n){
            sum += a[high - 1];

            
            while(low < high && sum > k){
                sum -= a[low];
                low++;
            }

            if(sum == k){
           
                int low2 = low;
                while(low2 < high && a[low2] == 0){
                    low2++;
                }
                count += (low2 - low) + 1;
            }

            high++;
        }

        return count;
    }
};