class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1=nums[0];
        int max2=0;
        int index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
                index=i;
            }
            
            else if(nums[i]>max2){
                max2=nums[i];
            }
        }
        if(max1>=2*max2)
            return index;
        
        return -1 ;
    }
};