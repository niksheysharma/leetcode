class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1= 0;
        int n2 =0;
        while(n1 < m + n2 && n2 < n){
           if(nums2[n2] <= nums1[n1]){
            for(int i = m + n2;i >n1;i--){
                nums1[i] = nums1[i - 1];
                }
            nums1[n1] = nums2[n2];
            n2++;
            n1++;
           }
           else{
            n1++;
           }
        }
        while (n2 < n) {
            nums1[m + n2] = nums2[n2];
            n2++;
        }
    }
};
