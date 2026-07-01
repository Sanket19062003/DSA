class Solution {
public:
    int high_ele(vector<vector<int>> & mat, int col){
        int n = mat.size();
        int index = 0;
        int max_ele = INT_MIN;
        for(int i=0;i<n;i++){
            if(mat[i][col] > max_ele){
                index = i;
                max_ele = mat[i][col];
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m-1;
        while(low <= high){
            int mid = (low+high)/2;
            int row = high_ele(mat, mid);
            int left = (mid-1 >=0) ? mat[row][mid-1] : -1;
            int right = (mid+1 < m) ? mat[row][mid+1] : -1;
            if(mat[row][mid] > left && mat[row][mid] > right) return {row,mid};
            else if(left > mat[row][mid]) high = mid-1;
            else low = mid+1; 
        }
        return {-1,-1};
    }
};