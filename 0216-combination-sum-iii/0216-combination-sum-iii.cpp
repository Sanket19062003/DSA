class Solution {
public:
    void func(int sum, int element, vector<vector<int>>& ans, vector<int>& temp, int k){
        if(sum == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(sum <= 0 || temp.size() > k) return;
        
        for(int i = element; i<=9;i++){
            if(i <= sum){
                temp.push_back(i);
                func(sum-i,i+1,ans,temp,k);
                temp.pop_back();
            }else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        func(n,1,ans,temp,k);
        return ans;
    }
};