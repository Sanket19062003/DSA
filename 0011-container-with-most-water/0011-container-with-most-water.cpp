class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int maxi = 0;
        while(left < right){
            int length = min(height[left], height[right]);
            int breadth = right-left;
            int area = length * breadth;
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
            maxi = max(maxi,area);
        }
        return (int) maxi;
    }
};