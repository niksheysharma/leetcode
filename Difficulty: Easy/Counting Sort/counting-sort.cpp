class Solution {
  public:
    string countSort(string s) {
        // code here
        int n = s.size();
        int arr[256] ={0};
        for(int i = 0;i < n;i++){
            arr[s[i]]++;
        }
        string res = "";
        for(int i = 0;i < 256;i++){
            while(arr[i] > 0){
                res += (char)i;
                arr[i]--;
            }
        }
        return res;
}
};