class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // find the first missing multiple of k 
        // it is first k then k*2
        unordered_map<int,int> f;
        int n = nums.size();
        for(int i= 0;i < n;i++){
            f[nums[i]]++;
        }
        bool bol = true;
        for(int i= 1;bol;i++){
            if(f[k*i] > 1){
                continue;
            }
            if(f[k*i] != 1){ 
                return k*i;
                bol = false;
            }


        }
        return - 1;

    }
};