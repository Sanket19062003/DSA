class Solution {
public:
    vector<int> rotate_ele(vector<int> arr, int n, int d){
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        return arr;
    }

    bool check_ascending(vector<int>& nums, int n){
        int cnt = 1;
        for(int i =1; i<n;i++){
            if(nums[i] < nums[i-1]){
               // return false;
                break;
            }
            cnt++;
        }
        if(cnt != n){  
            vector<int>dum = rotate_ele(nums, n, cnt);
            sort(nums.begin(),nums.end());
            for(int i =0;i<n;i++){
                if((dum[i]^nums[i]) != 0){
                    return false;
                }
            }   
        }
        
        return true;
    }

    bool check(vector<int>& nums) {
        bool a = check_ascending(nums, nums.size());
        return a;
    }
};