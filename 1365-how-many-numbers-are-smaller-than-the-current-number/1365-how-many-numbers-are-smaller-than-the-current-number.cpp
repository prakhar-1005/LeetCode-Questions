class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        vector<int> ans;
        for(int i=0;i<n;i++)
            arr[i]=nums[i];
        int j=0;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            int count=0;
          while(arr[j]!=nums[i]){
              j++;
              count++;
          }
        ans.push_back(count);
        j=0;
        }
        return ans;
    }
};