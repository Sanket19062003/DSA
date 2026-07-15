class Solution {
public:
    int gcd(int i, int j){
        if(i == 0) return j;
        if(j == 0) return i;
        if(i == j) return i;
        if(i > j){
            return gcd(i-j,j);
        }
        return gcd(i,j-i);
    }
    int gcdOfOddEvenSums(int n) {
        int even_sum = 0;
        int odd_sum = 0;
        int i = 2;
        int j = 1;
        while(n){
            even_sum += i;
            i+2;
            odd_sum += j;
            j+2;
            n--;
        }
        return gcd(even_sum,odd_sum);
    }
};