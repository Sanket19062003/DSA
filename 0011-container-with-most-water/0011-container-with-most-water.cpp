class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int i=0, j = n-1;
        while(i < j){
            int length = min(height[i], height[j]);
            int breadth = j-i;
            int area = length*breadth;
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
            ans = max(ans,area);
        }
        return ans;
    }
};