class Solution {
    void solve(vector<int> nums,int n,vector<vector<int>> &ans,int i,vector<int> subset){
        
        if(i>=n){
            ans.push_back(subset);
            return ;
        }
         subset.push_back(nums[i]);
         solve(nums,n,ans,i+1,subset);
        
         
         subset.pop_back();
         solve(nums,n,ans,i+1,subset);
         
        
              
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> subset;
        int i=0;
        solve(nums,n,ans,i,subset);
        return ans;
    }
};