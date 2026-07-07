class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = "";
        long long mul = 0;
        for(char c : to_string(n)){
            if(c != '0'){
                s = s+c;
                mul = mul + (c-'0');
            }
        }
        long long ans = 0;
        if(!s.empty()){
            ans = stoll(s);
        }
        return ans*mul;
    }
};