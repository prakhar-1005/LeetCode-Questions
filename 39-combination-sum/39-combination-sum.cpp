class Solution {
    void solve(vector<int>candidates,int target, vector<int> ds, vector<vector<int>> &ans,int i,int n){
        
        if(i==n){
            if(target==0)
            ans.push_back(ds);
            return;
        }
        
        if(target>=candidates[i]){
            ds.push_back(candidates[i]);
            solve (candidates,target-candidates[i],ds,ans,i,n);
            ds.pop_back();
        }
        solve (candidates,target,ds,ans,i+1,n);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int i=0;
        int n=candidates.size();
        solve (candidates,target,ds,ans,i,n);
        
        return ans;
    }
};