class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a =0;
        int b = 0;
        for(int i=0; i<=n; i++){
            a = a^i;
        }
        for(int i=0; i<n; i++){
            b = b^nums[i];
        }
        return a^b;
    }
};
