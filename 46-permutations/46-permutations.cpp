class Solution {
    void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>ds,int freq[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int j=0;j<nums.size();j++){
            if(freq[j]==0){
                freq[j]=1;
                ds.push_back(nums[j]);
                solve(nums,ans,ds,freq);
                ds.pop_back();
                freq[j]=0;
            }
        }
    
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)
            freq[i]=0;
        vector<int> ds;
        solve(nums,ans,ds,freq);
        return ans;
    }
};