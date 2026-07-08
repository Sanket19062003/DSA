class Solution {
public:
    bool check_palindrome(int left, int right, string s){
        while(left <= right){
            if(s[left++] != s[right--]) return false;
        }
        return true;
    }
    void func(int index, string s, vector<vector<string>>& ans, vector<string>& temp){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = index;i<s.size();i++){
            if(check_palindrome(index,i,s)){
                temp.push_back(s.substr(index,i-index+1));
                func(i+1,s,ans,temp);
                temp.pop_back();    
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        func(0,s,ans,temp);
        return ans;
    }
};