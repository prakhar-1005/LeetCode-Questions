class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int fast=1;
        while(fast<nums.size()){
            if(nums[fast]!=nums[slow]){
                nums[slow+1]=nums[fast];
                slow++;
            }
            fast++;
        }
        return slow+1;
    }
};