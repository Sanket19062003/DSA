class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x = INT_MIN;
        int y = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= x){
                y = x;
                x = nums[i];
            }else if(nums[i] > y){
                y = nums[i];
            }
        }
        return (x-1)*(y-1);
    }
};