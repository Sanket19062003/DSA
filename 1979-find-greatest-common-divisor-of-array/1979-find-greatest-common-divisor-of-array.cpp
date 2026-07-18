class Solution {
public:
    int gcd(int i, int j, vector<int>& nums){
        if(i == 0) return j;
        if(j == 0) return i;
        if(i > j) return gcd(i-j,j,nums);
        return gcd(i,j-i,nums);

    }
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
            if(nums[i] < smallest){
                smallest = nums[i];
            }
        }

        return gcd(smallest,largest,nums);
    }
};