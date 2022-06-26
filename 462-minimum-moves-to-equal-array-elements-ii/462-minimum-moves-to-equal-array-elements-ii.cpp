class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(i==mid)
                continue;
            if(nums[i]>nums[mid])
              count+=nums[i]-nums[mid];
            
            else
                count+=nums[mid]-nums[i];
            
        }
        return count;
        
    }
};