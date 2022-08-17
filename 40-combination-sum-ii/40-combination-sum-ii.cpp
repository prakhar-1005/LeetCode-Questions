class Solution {
    void findCombinationSum(int index, vector<int> &candidates, int target, vector<int>&ds, vector<vector<int>> &ans){
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            
            if(i>index && candidates[i-1]==candidates[i])
                continue;
            
            if(target<candidates[i])
                return;
            
            ds.push_back(candidates[i]);
            findCombinationSum(i+1,candidates,target-candidates[i],ds,ans);
            ds.pop_back();
        }
        
    }
        
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int index=0;
        vector<int> ds;
        vector<vector<int>> ans;
        
        findCombinationSum(index,candidates,target,ds,ans);
        return ans;
        
    }
};