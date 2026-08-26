int sum(int n){
    int su = 0;
    while(n > 0){
        su += n%10;
        n = n/10;
    }
    return su;

}
int pro(int n){
    int po = 1;
    while(n > 0){
        po *= n%10;
        n = n/10;
    }
    return po;

}
class Solution {
public:
    bool checkDivisibility(int n) {
        int su = sum(n);
        int po = pro(n);
        if(n%(su + po) ==0 ){
            return true;
        }
        return false;
    }
};