class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i =0;
        int j = 1;
        for(; j<nums.size(); j++, i++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
        return false;
    }
};