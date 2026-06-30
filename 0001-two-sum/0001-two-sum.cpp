class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> reference;
        vector<int> ans;
        for(int i=0;i<n;i++){
            reference.push_back({nums[i],i});
        }
        sort(reference.begin(), reference.end(),[](vector<int>& a, vector<int>& b){
            return a[0]< b[0];
        });
        int left = 0, right = n-1;
        while(left <= right){
            if(reference[left][0] + reference[right][0] == target){
                ans.push_back(reference[left][1]);
                ans.push_back(reference[right][1]);
                return ans;
            }else if(reference[left][0] + reference[right][0] > target){
                right--;
            }else{
                left++;
            }
        }
        return {-1,-1};
    }
};