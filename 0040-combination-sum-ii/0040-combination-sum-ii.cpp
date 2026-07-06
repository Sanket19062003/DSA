class Solution {
public:
    void func(vector<int>& candidates, int sum, int index, vector<int>& temp, vector<vector<int>>& ans){
        if(sum == 0){
            ans.push_back(temp);
            return;
        }
        if(sum < 0 || index == candidates.size()) return;

        temp.push_back(candidates[index]);

        func(candidates, sum-candidates[index], index+1,temp,ans);

        temp.pop_back();
        
        for(int i = index+1; i < candidates.size();i++){
            if(candidates[i] != candidates[index]){
                func(candidates,sum,i,temp,ans);
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        func(candidates, target, 0, temp, ans);
        return ans;
    }
};