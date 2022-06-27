class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int siz=nums.size();
        int n=siz-1;
        sort(nums.begin(),nums.end());
        int i=0;
        int ans=0;
        while(i<siz){
            if(nums[i]==nums[i+1]){
                 ans= nums[i];
            break;
            }
            else i++;
        }
        return ans;
        
    }
};