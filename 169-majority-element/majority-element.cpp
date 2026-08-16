class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> f;
        for(int i = 0;i < n;i++){
            f[nums[i]]++;
        }
        for(auto i : f){
            if(i.second > n/2){
                return i.first;
            }
        }
        return -1;
    }
};