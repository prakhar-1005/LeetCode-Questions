class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int times=n/2;
        int ans=0;
        int count=1;
        sort(nums.begin(),nums.end());
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1])
                count++;
            
            if(count>times){
                ans=nums[i];
                break;
            }
            
            if(nums[i]!=nums[i+1])
                count=1;
        }
        
        return ans;
    }
};