class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int index;
            if(target<nums[0]) index = 0;
            else if(target>nums[nums.size()-1]) index = nums.size();
            else{
                for(int i = 0; i < nums.size(); i++){
                    if(target==nums[i]) index = i;
                    else if(target>nums[i]&&target<nums[i+1]) index = i+1;
                }
            }
            return index;
        }
    };