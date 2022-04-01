class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==val){
                nums[i]=-1;
            }
            i++;
      
        }
        
        sort(nums.begin(),nums.end(),greater<int>());
        int k=0;
        int j=0;
        while(j<n){
            if(nums[j]!=-1){
                k++;
            }
            j++;  
        }
        
        return k;
        
    }
};