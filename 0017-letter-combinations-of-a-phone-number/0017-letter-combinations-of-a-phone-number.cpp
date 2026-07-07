class Solution {
public:
    void func(int index, string digits, string s, vector<string>& ans,string combo[]){
        if(index == digits.size()){
            ans.push_back(s);
            return;
        }
        int element = digits[index] - '0';
        for(int i = 0; i< combo[element].size();i++){
            func(index+1,digits,s+combo[element][i],ans,combo);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        string combo[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string s = "";
        func(0,digits,s,ans,combo);
        return ans;
    }
};