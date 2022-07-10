class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int f=1;
        while(f<nums.size()){
            if(nums[s]!=nums[f])
                return nums[s];
            s+=2;
            f+=2;
        }
        return nums[s];
    }
};