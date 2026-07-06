class Solution {
public:
    void func(int index, int n, vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        func(index+1,n,nums,ans,temp);
        temp.pop_back();
        func(index+1,n,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        func(0,nums.size(),nums,ans,temp);
        return ans;
    }
};