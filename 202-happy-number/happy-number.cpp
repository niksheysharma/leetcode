int sq(int n){
    int sum =0;
    while(n > 0){
        int d = n%10;
        sum = sum + d*d;
        n= n/10;
    }
    return sum;
}


class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        if(n == 10 || n ==100){return true;}
        while(fast != 1 ){
            slow = sq(slow);
            fast = sq(sq(fast));
            if(slow == fast){
                return false;
            }
        }
        
        return true;
    }
};