class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=1;
        int n=nums.size();
        while(i<n){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
};