class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target)
                break;
            
            if(target==nums[i])
                ans.push_back(i);
            
        }
        
        return ans;
    }
};