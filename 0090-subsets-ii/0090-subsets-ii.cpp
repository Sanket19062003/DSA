class Solution {
public:
    void func(int index, vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp){
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[index]);
        func(index+1,nums,ans,temp);
        temp.pop_back();
        for(int i = index+1; i<nums.size();i++){
            if(nums[i] != nums[index]){
                func(i,nums,ans,temp);
                return;
            }
        }
        func(nums.size(),nums,ans,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        func(0,nums,ans,temp);
        return ans;
    }
};