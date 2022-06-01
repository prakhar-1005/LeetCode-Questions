class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> rsum(n,0);
        int i=0,sum=0;
        while(i<n){
            sum+=nums[i];
            rsum[i]=sum;
            i++;
        }
        return rsum;
    }
};