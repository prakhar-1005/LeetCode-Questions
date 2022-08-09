class Solution {
    int solve(vector<int>nums,int x){
        int lsum=0;
        int rsum=0;
        
        
        if(x>=nums.size())
            return -1;
        
            
            
        for(int i=0;i<x;i++)
            lsum+=nums[i];
        
        
        for(int i=x+1;i<nums.size();i++)
            rsum+=nums[i];
        
        
        if(lsum==rsum)
          return x;
        
        
       return solve(nums,x+1);
        
    }
public:
    int findMiddleIndex(vector<int>& nums) {
        int final=solve(nums,0);
        if(final==-1)
            return -1;
        
        return final;
    }
};