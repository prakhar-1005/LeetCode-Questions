class Solution {
    int search(vector<int>&nums,int x){
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid=s+ (e-s)/2;
            
            if(nums[mid]==x){
                return 1;
            }
            
            else if(nums[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
               
        }
        return 0;
        
    }
public:
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        
        int x=original;
        int flag=0;
        flag=search(nums,x);
        
        while(flag==1){
            x=x*2;
            flag=search(nums,x);
        }
        
        return x;
    }
};