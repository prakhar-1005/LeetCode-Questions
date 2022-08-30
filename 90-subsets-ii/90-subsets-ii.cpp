class Solution {
    void solve(int ind, vector<int>nums, vector<int> ds,vector<vector<int>> &ans){
        
            ans.push_back(ds);
        
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(i+1,nums,ds,ans);
            ds.pop_back();   
        }   
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ind=0;
        vector<int> ds;
        vector <vector<int>> ans;
        solve(ind,nums,ds,ans);
        return ans;
    }
};