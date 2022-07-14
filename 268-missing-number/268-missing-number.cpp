class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0; /* This is initialised to 0 for the case when the first element after sorting is not 
        equal to 0. We observe that the if condition in loop fails and also the if condition out of the loop*/
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]!=nums[i]+1){
                ans= nums[i]+1;
                break;
            }    
        }
        if(nums[n-1]!=n)
          ans=n;
        
        return ans;
    }
};