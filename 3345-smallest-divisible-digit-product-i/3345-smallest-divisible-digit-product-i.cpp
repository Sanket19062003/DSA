class Solution {
public:
    bool check(int num, int divisor){
        int product = 1;
        while(num){
            product *= (num%10);
            num /= 10;
        }
        if(product % divisor == 0) return true;
        return false;
    }
    int smallestNumber(int n, int t) {
        int smallestNumber = n;
        for(int i=n;i<=100;i++){
            if(check(i,t)){
                return i;
            }
        }
        return -1;
    }
};