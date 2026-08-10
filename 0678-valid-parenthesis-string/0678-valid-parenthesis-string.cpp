class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0, maxOpen = 0;
        for(char ch : s){
            if(ch == '('){
                minOpen++;
                maxOpen++;
            }else if(ch == ')'){
                minOpen--;
                maxOpen--;
            }else{
                minOpen--;
                maxOpen++;
            }
            if(minOpen < 0) minOpen = 0;
            if(maxOpen < 0) return false;
        }
        return minOpen == 0;
    }
};