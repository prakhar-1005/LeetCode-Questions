class Solution {
    void solve(vector<int>& nums,vector<int>output,int index,vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back(output);
            return;
        }
        
        //for excluding
        solve(nums,output,index+1,ans);
        
        //for including
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<int>output;
        vector<vector<int>> ans;
        solve(nums,output,index,ans);
       return ans; 
    }
};