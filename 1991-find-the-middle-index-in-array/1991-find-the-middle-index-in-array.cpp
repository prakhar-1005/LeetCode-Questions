class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int lsum=0;
        
        for(auto x:nums)
            sum+=x;
        
        for(int i=0;i<nums.size();i++){
            
            if(lsum==sum-lsum-nums[i])
                return i;
            lsum+=nums[i];     
        }
        return -1;
    }
};